#include <stdio.h>

int isPrime(int );

int main()
{
	int num;
	scanf("%d", &num);

	isPrime(num) ? puts("true") : puts("false");

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