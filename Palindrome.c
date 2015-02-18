#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *alphaOnly(char *);
char *reverse(char *);
int isPalindromes(char *);

int i;

int main()
{
	char text[1024];
	gets(text);

	isPalindromes(text) ? puts("This message is palindrome sequence.") : puts("This message is not palindrome sequence.");

	return 0;
}

char *alphaOnly(char *s)
{
	char *str = (char *)malloc(1024);
	int pos = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]) || isdigit(s[i]))
		{
			str[pos] = tolower(s[i]);
			pos++;
		}
	}

	str[pos] = '\0';

	return str;
}

char *reverse(char *s)
{
	char *str = (char *)malloc(1024);
	int pos = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		str[pos] = s[i];
		pos++;
	}

	str[pos] = '\0';

	return str;
}

int isPalindromes(char *s)
{
	int i;
	for (i = 0; i < strlen(alphaOnly(s)); i++)
	{
		if (alphaOnly(s)[i] != reverse(alphaOnly(s))[i])
		{
			return 0;
		}
	}

	return 1;
}