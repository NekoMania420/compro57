#include <stdio.h>

int main()
{
	float a, b, c, swap;
	scanf("%f %f %f", &a, &b, &c);

	if (a > b)
	{
		swap = a;
		a = b;
		b = swap;
	}

	if (b > c)
	{
		swap = b;
		b = c;
		c = swap;
	}

	if (a > b)
	{
		swap = a;
		a = b;
		b = swap;
	}

	printf("%.2f\n", b);

	return 0;
}