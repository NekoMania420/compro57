#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAllDigit(char *);
void pronounce(char *);

int main()
{
	char text[1025];
	do
	{
		gets(text);
		!isAllDigit(text) ? puts("Error") : 0;
	} while (!isAllDigit(text));

	pronounce(text);

	return 0;
}

int isAllDigit(char *s)
{
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if (!isdigit(s[i]))
		{
			return 0;
		}
	}

	return 1;
}

void pronounce(char *s)
{
	char word[][100] = {"zero", "one", "two", "three", "four",
						"five", "six", "seven", "eight", "nine"};

	int i;
	for (i = 0; i < strlen(s); i++)
	{
		printf("%s ", word[(int)s[i] - '0']);
	}

	putchar('\n');
}