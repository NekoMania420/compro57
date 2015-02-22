#include <stdio.h>
#include <stdlib.h>

int sum(int *, int );

int main()
{
	int num;
	scanf("%d", &num);

	int *numList = (int *)malloc(255);
	int p = 0;
	int i;
	for (i = 1; i <= num / 2; i++)
	{
		if (!(num % i))
		{
			numList[p] = i;
			p++;
		}
	}

	for (i = 0; i < p; i++)
	{
		i != p - 1 ? printf("%d+", numList[i]) : printf("%d=%d\n", numList[i], sum(numList, p));
	}

	sum(numList, p) == num ? puts("It is a perfect number.") : puts("It is not a perfect number.");

	return 0;
}

int sum(int *n, int p)
{
	int sum = 0, i;
	for (i = 0; i < p; i++)
	{
		sum += n[i];
	}

	return sum;
}