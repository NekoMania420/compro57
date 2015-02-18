#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printNoVowel(char *);
int notVowel(char );

int i, j;

int main()
{
	char text[1024];
	gets(text);

	printNoVowel(text);

	return 0;
}

void printNoVowel(char *s)
{
	for (i = 0; i < strlen(s); i++)
	{
		notVowel(s[i]) ? putchar(s[i]) : 0;
	}

	putchar('\n');
}

int notVowel(char c)
{
	char blacklist[6] = "aeiou";

	int i;
	for (i = 0; i < strlen(blacklist); i++)
	{
		if (blacklist[i] == c || toupper(blacklist[i]) == c)
		{
			return 0;
		}
	}

	return 1;
}