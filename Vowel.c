#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char text[100];
	scanf("%[^\n]s", text);

	int vowelCount[] = {0, 0, 0, 0, 0};
	int totalVowel = 0;
	char vowelChar[] = "aeiou";

	int i, j;

	for (i = 0; i < strlen(text); i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (tolower(text[i]) == vowelChar[j])
			{
				totalVowel++;
				vowelCount[j]++;
			}
		}
	}

	printf("Result:\n");
	printf("\'Vowel\': %d\n", totalVowel);
	for (i = 0; i < 5; i++)
	{
		printf("\'%c\': %d\n", vowelChar[i], vowelCount[i]);
	}

	return 0;
}