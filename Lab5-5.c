#include <stdio.h>

int main()
{
	int i, n;
	float input, min, max, sum;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%f", &input);
		i == 0 ? min = input : input < min ? min = input : 0;
		i == 0 ? max = input : input > max ? max = input : 0;
		sum += input;
	}

	printf("%d Values\n", n);
	printf("Min: %.3f\n", min);
	printf("Max: %.3f\n", max);
	printf("Avg: %.3f\n", sum / n);

	return 0;
}