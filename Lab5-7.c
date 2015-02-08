#include <stdio.h>

int main()
{
	int input, i;
	
	while (1)
	{
		scanf("%d", &input);
		if (input % 2 != 0)
		{
			printf("Error\n");
		}
		else
		{
			break;
		}
	}

	for (i = 1; i <= input / 2; i++)
	{
		printf("%d", i);
	}

	for (i = input / 2; i >= 1; i--)
	{
		printf("%d", i);
	}

	printf("\n");

	return 0;
}