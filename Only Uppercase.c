#include <stdio.h>
#include <string.h>
#include <ctype.h>

int i;

int main()
{
	char text[1024];
	gets(text);

	for (i = 0; i < strlen(text); i++)
	{
		isupper(text[i]) ? putchar(text[i]) : putchar(' ');
	}

	putchar('\n');

	return 0;
}