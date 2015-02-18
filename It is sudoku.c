#include <stdio.h>
#include <string.h>

int isSudoku(char (*)[10]);
int isRepeat(char *);

int i, j, k;

int main()
{
	char table[9][10];

	for (i = 0; i < 9; i++)
	{
		gets(table[i]);
	}

	isSudoku(table) ? puts("Valid") : puts("Invalid");

	return 0;
}

int isSudoku(char (*s)[10])
{
	/* Each row */
	for (i = 0; i < 9; i++)
	{
		if (isRepeat(s[i]))
		{
			return 0;
		}
	}

	/* Each column */
	/* isRepeat(); cannot use in this case */
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = j + 1; k < 9; k++)
			{
				if (s[j][i] == s[k][i])
				{
					return 0;
				}
			}
		}
	}

	return 1;
}

int isRepeat(char *s)
{
	for (i = 0; i < strlen(s); i++)
	{
		for (j = i + 1; j < strlen(s); j++)
		{
			if (s[i] == s[j])
			{
				return 1;
			}
		}
	}

	return 0;
}