#include <stdio.h>

int main()
{
	int start, end;
	do
	{
		scanf("%d %d", &start, &end);
		if (!((start >= 1 && start <= 30) && (end >= 1 && end <= 30)))
		{
			printf("Date Error\n");
		}
	} while (!((start >= 1 && start <= 30) && (end >= 1 && end <= 30)));

	int i;
	int shoeType[3] = {0, 0, 0}; // Sport shoe, Boots, Flip flop
	for (i = start; i <= end; i++)
	{
		if (i == 9 || i == 18 || i == 27)
		{
			shoeType[1] += 3;
		}
		else
		{
			if (i % 2 != 0)
			{
				shoeType[0] += 3;
			}
			else
			{
				shoeType[0] += 2;
				shoeType[2]++;
			}
		}
	}

	printf("sport shoe %d\n", shoeType[0]);
	printf("boots %d\n", shoeType[1]);
	printf("flipflop %d\n", shoeType[2]);

	return 0;
}