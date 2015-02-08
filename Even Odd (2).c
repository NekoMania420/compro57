#include <stdio.h>

int main()
{
	int input;
	int numType[2][2] = {{0, 0}, {0, 0}}; // {Even, n(Even)}, {Odd, n(Odd)}

	while (1)
	{
		scanf("%d", &input);
		if (input != 0)
		{
			if (input % 2 == 0)
			{
				numType[0][0] += input;
				numType[0][1]++;
			}
			else
			{
				numType[1][0] += input;
				numType[1][1]++;
			}
		}
		else
		{
			numType[0][1]++;
			break;
		}
	}

	char suf[][50] = {"number", "numbers"};

	printf("Sum of %d even %s = %d\n", numType[0][1], suf[numType[0][1] >= 2], numType[0][0]);
	printf("Sum of %d odd %s = %d\n", numType[1][1], suf[numType[1][1] >= 2], numType[1][0]);

	return 0;
}