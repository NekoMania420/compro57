#include <stdio.h>

int step(int );

int main()
{
	int num;
	scanf("%d", &num);

	printf("%d", step(num));

	return 0;
}

int step(int n)
{
	if (n == 1)
	{
		return 1;
	}	
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return step(n - 1) + step(n - 2);
	}
}