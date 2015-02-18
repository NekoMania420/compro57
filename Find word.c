#include <stdio.h>
#include <string.h>

int find(char *, char *);
int match(int , char *, char *);

int main()
{
	char text[1025], targetWord[1025];
	gets(text);
	gets(targetWord);

	find(text, targetWord) ? 0 : puts("Not Found");

	return 0;
}

int find(char *str, char *word)
{
	int i;
	for (i = 0; i <= strlen(str) - strlen(word); i++)
	{
		if (match(i, str, word))
		{
			printf("Found at character number %d\n", i + 1);
			return 1;
		}
	}

	return 0;
}

int match(int pos, char *str, char *word)
{
	int i, j;
	for (i = pos, j = 0; i < pos + strlen(word); i++, j++)
	{
		if (str[i] != word[j])
		{
			return 0;
		}
	}

	return 1;
}