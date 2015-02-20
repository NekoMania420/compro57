#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isDigitUnique(int , int );
int isPrime(int );
char *toString(int );

int main()
{
	int num;
	scanf("%d", &num);
	int i, found = 0;
	for (i = floor(pow(10, num)) - 1; i >= floor(pow(10, num - 1)); i--)
	{
		if (isDigitUnique(i, num))
		{
			if (isPrime(i))
			{
				printf("%d\n", i);
				found = 1;
				break;
			}
		}
	}
	found ? 0 : puts("N/A");
	return 0;
}

int isDigitUnique(int n, int lim)
{
	int i, j;
	for (i = 0; i < strlen(toString(n)); i++)
	{
		if (!((int)toString(n)[i] - '0' >= 1 && (int)toString(n)[i] - '0' <= lim))
		{
			return 0;
		}
	}
	for (i = 0; i < strlen(toString(n)); i++)
	{
		for (j = i + 1; j < strlen(toString(n)); j++)
		{
			if (toString(n)[i] == toString(n)[j])
			{
				return 0;
			}
		}
	}
	return 1;
}

int isPrime(int n)
{
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (!(n % i))
		{
			return 0;
		}
	}
	return 1;
}

char *toString(int n)
{
	char *temp = (char *)malloc(100);
	sprintf(temp, "%d", n);
	return temp;
}