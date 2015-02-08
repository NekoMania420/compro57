#include <stdio.h>

int main()
{
	int i, n, input, sum = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &input);
		sum += input;
	}

	printf("Sum of %d numbers = %d\n", n, sum);
	printf("Sum of %d numbers = %.2lf\n", n, sum / (double)n);

	return 0;
}