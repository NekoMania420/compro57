#include <stdio.h>
#include <math.h>

void isPrime(int );

int main()
{
	int num;
	scanf("%d", &num);

	isPrime(num);

	return 0;
}

void isPrime(int n)
{
	int dividable = 0;

	int i;
	for (i = 2; i <= n / 2; i++)
	{
		n % i == 0 ? dividable = 1 : 0;
	}

	dividable == 0 ? puts("true") : puts("false");
}