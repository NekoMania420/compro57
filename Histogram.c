#include <stdio.h>
#include <string.h>
#include <ctype.h>

int haveChar(int []);
int max(int []);
void printHistogram(int []);

int i, j;

int main()
{
	char text[100];
	gets(text);

	int hist[26];
	for (i = 0; i < 26; i++)
	{
		hist[i] = 0;
	}

	for (i = 0; i < strlen(text); i++)
	{
		if (isalpha(text[i]))
		{
			hist[(int)toupper(text[i]) - 'A']++;
		}
	}

	printHistogram(hist);

	return 0;
}

int haveChar(int hist[])
{
	int count = 0;
	for (i = 0; i < 26; i++)
	{
		hist[i] >= 1 ? count++ : 0;
	}

	return count;
}

int max(int hist[])
{
	int high = hist[0];
	for (i = 0; i < 26; i++)
	{
		hist[i] > high ? high = hist[i] : 0;
	}

	return high;
}

void printHistogram(int hist[])
{
	int i;
	for (i = 0; i < 2 * haveChar(hist) - 1; i++)
	{
		putchar('-');
	}
	putchar('\n');
	for (i = max(hist); i > 0; i--)
	{
		for (j = 0; j < 26; j++)
		{
			hist[j] >= i && hist[j] <= max(hist) ? printf("* ") : hist[j] >= 1 && hist[j] != i ? printf("  ") : 0;
		}

		putchar('\n');
	}
	for (i = 0; i < 26; i++)
	{
		hist[i] >= 1 ? printf("%c ", i + 'A') : 0;
	}
}