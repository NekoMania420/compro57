#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = (2 * i) + 1; j <= n * 2; j += 2)
		{
			printf("%d", j);
		}

		printf("\n");
	}

	return 0;
}