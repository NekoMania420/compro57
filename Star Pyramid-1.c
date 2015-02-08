#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (i = n - 2; i >= 0; i--)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}