#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[100], target;
	scanf("%[^\n]s", text);
	scanf(" %c", &target);

	int i, charPos[100], pos = 0;
	for (i = 0; i < strlen(text); i++)
	{
		if (tolower(text[i]) == tolower(target))
		{
			charPos[pos] = i;
			pos++;
		}
	}

	char sep[] = {',', ' '};
	printf("There is/are %d \"%c\" in the above sentences.\n", pos, target);
	printf("Position: ");
	for (i = 0; i < pos; i++)
	{
		printf("%d%c ", charPos[i] + 1, sep[i == pos - 1]);
	}

	return 0;
}