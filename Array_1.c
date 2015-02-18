#include <stdio.h>
#define MAX 20

int main()
{
	int odd[MAX], even[MAX];
	int pos[2] = {0, 0};
	
	int num, i;
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &num);
		if (!(num % 2))
		{
			even[pos[1]] = num;
			pos[1]++;
		}
		else
		{
			odd[pos[0]] = num;
			pos[0]++;
		}
	}

	printf("Even number: ");
	for (i = 0; i < pos[1]; i++)
	{
		printf("%d ", even[i]);
	}
	putchar('\n');
	printf("Odd number: ");
	for (i = 0; i < pos[0]; i++)
	{
		printf("%d ", odd[i]);
	}

	return 0;
}