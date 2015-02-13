#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	/* Input name and convert all character to lowercase for sorting */

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
			temp[j] = tolower(input[j]);
		}
		temp[len] = '\0';

		strcpy(name[i], temp);
	}

	/* Sort name by character from a-z */

	char temp[30];
	for (i = 0; i < 20; i++)
	{
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

	/* Output with adjusted all characters in each name */

	int k;
	for (i = 0; i < 20; i++)
	{
		char n[2][30];
		sscanf(name[i], "%s %s", n[0], n[1]);
		for (j = 0; j < 2; j++)
		{
			int len = strlen(n[j]);
			for (k = 0; k < len; k++)
			{
				if (k == 0)
				{
					putchar(toupper(n[j][k]));
				}
				else
				{
					putchar(tolower(n[j][k]));
				}
			}

			putchar(' ');
		}

		putchar('\n');
	}

	return 0;
}