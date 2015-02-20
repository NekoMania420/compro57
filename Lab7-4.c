#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *toString(int );
int isPrime(int );
int shift(char *, int );

int main()
{
	int num;
	scanf("%d", &num);
	int i, allPrime = 1;
	for (i = 0; i < strlen(toString(num)); i++)
	{
		if (!isPrime(shift(toString(num), i)))
		{
			allPrime = 0;
			break;
		}
	}
	isPrime(num) && num >= 2 ? allPrime ? puts("Circular Prime") : puts("Normal Prime") : puts("Not a Prime");
	return 0;
}

char *toString(int n)
{
	char *s = (char *)malloc(100);
	sprintf(s, "%d", n);
	return s;
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

int shift(char *s, int n)
{
	char *temp = (char *)malloc(100 * sizeof(char));
	int i, p = 0;
	for (i = n; i < n + strlen(s); i++)
	{
		temp[p] = s[i % strlen(s)];
		p++;
	}
	return atoi(temp);
}