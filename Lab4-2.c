#include <stdio.h>

int main()
{
	long a, b;
	scanf("%ld %ld", &a, &b);
	if (a==b)
	{
		printf("%ld + %ld = %ld\n", a, b, a+b);
	}
	else
	{
		printf("%ld - %ld = %ld\n", a, b, a-b);
	}

	return 0;
}