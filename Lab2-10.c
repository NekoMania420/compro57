#include <stdio.h>

int main()
{
	int i;
	char input[5];

	for (i=0; i<5; i++)
	{
		printf("Input%d: ", i+1);
		scanf(" %c", &input[i]);
	}

	printf("**********\n");

	for (i=0; i<5; i++)
	{
		printf("Output%d: ", i+1);
		if (i%2 == 0)
		{
			if (input[i] == 'z' || input[i] == 'Z')
			{
				printf("%c\n", input[i]-25);
			}
			else
			{
				printf("%c\n", input[i]+1);
			}
		}
		else
		{
			printf("%c\n", input[i]);
		}
	}

	return 0;
}