#include <stdio.h>
#include <math.h>

int isPrime(int );

int main()
{
	int prime[10];

	int i, num, pos = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		if (isPrime(num))
		{
			prime[pos] = num;
			pos++;
		}
	}

	printf("Prime number = %d\n", pos);
	for (i = 0; i < pos; i++)
	{
		printf("%d ", prime[i]);
	}

	putchar('\n');

	return 0;
}

int isPrime(int n)
{
	if (n < 2)
	{
		return 0;
	}

	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}