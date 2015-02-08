#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf("*");
		}

		for (j = 0; j < i * 2; j++)
		{
			printf(" ");
		}

		for (j = n - i; j >= 1; j--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}