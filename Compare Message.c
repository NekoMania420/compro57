#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int minLen(char *, char *);
int sameChar(char *, char *);
char *alphaOnly(char *);

int i;

int main()
{
	char text1[1025], text2[1025];
	gets(text1);
	gets(text2);

	sameChar(text1, text2) ? puts("Same character sequence.") : puts("Different character sequence.");

	return 0;
}

int minLen(char *a, char *b)
{
	if (strlen(a) < strlen(b))
	{
		return strlen(a);
	}
	else
	{
		return strlen(b);
	}
}

char *alphaOnly(char *s)
{
	char *str = (char *)malloc(1024);
	int pos = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]))
		{
			str[pos] = s[i];
			pos++;
		}
	}

	str[pos] = '\0';

	return str;
}

int sameChar(char *a, char *b)
{
	int i;
	for (i = 0; i < minLen(alphaOnly(a), alphaOnly(b)); i++)
	{
		if (alphaOnly(a)[i] != alphaOnly(b)[i])
		{
			return 0;
		}
	}

	return 1;
}