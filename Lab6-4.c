#include <stdio.h>
#include <string.h>

int main()
{
	char text[100];
	scanf("%[^\n]s", text);

	int i;
	for (i = strlen(text) - 1; i >= 0; i--)
	{
		putchar(text[i]);
	}

	putchar('\n');

	return 0;
}