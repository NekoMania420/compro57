#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char name[20][30];

	int i, j;
	for (i = 0; i < 20; i++)
	{
		char input[30];
		scanf(" %[^\n]s", input);

		int len = strlen(input);
		char temp[len];
		for (j = 0; j < len; j++)
		{
			if (j == 0 || (isalpha(input[j]) && input[j - 1] == ' '))
			{
				temp[j] = toupper(input[j]);
			}
			else
			{
				temp[j] = tolower(input[j]);
			}
		}

		temp[len] = '\0';
		strcpy(name[i], temp);
	}

	for (i = 0; i < 20; i++)
	{
		char temp[30];
		for (j = i + 1; j < 20; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}

	for (i = 0; i < 20; i++)
	{
		puts(name[i]);
	}

	return 0;
}