#include <stdio.h>

int main()
{
	float mtrxA[3][3], mtrxB[3][3];

	int i, j;
	puts("Matrix A");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &mtrxA[i][j]);
		}
	}

	puts("Matrix B");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &mtrxB[i][j]);
		}
	}

	float result[3][3];
	int k;
	puts("A x B");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			float sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum += mtrxA[i][k] * mtrxB[k][j];
			}

			result[i][j] = sum;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%.2f ", result[i][j]);
		}

		putchar('\n');
	}

	return 0;
}