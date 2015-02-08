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

	char suf[][50] = {"number", "numbers"};

	printf("Sum of %d %s = %d\n", n, suf[n >= 2], sum);
	printf("Avg of %d %s = %.2lf\n", n, suf[n >= 2], sum / (double)n);

	return 0;
}