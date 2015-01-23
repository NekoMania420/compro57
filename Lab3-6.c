#include <stdio.h>
#define LIMIT 4

int main()
{
	int i;
	float value, sum=0;

	for (i=0; i<LIMIT; i++)
	{
		scanf("%f", &value);
		sum += value;
	}

	printf("Summation is %.2f\n", sum);
	printf("Average is %.3f\n", sum/LIMIT);

	return 0;
}