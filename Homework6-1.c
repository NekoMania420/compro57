#include <stdio.h>
#include <string.h>

int main()
{
	char numText[100];
	scanf("%s", numText);

	char numWord[][50] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	int i;
	for (i = 0; i < strlen(numText); i++)
	{
		printf("%s ", numWord[(int)numText[i] - '0']);
	}

	putchar('\n');

	return 0;
}