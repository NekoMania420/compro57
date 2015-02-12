#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[100];
	scanf("%s", text);

	int i;

	for (i = 0; i < strlen(text); i++)
	{
		if (islower(text[i]))
		{
			putchar(toupper(text[i]));
		}
		else if (isupper(text[i]))
		{
			putchar(tolower(text[i]));
		}
		else
		{
			putchar(text[i]);
		}
	}

	putchar('\n');

	return 0;
}