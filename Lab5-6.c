#include <stdio.h>

int main()
{
	int input, sum = 0;

	while (1)
	{
		scanf("%d", &input);
		if (input != -9)
		{
			sum += input;
		}
		else
		{
			break;
		}
	}

	printf("%d", sum);

	return 0;
}