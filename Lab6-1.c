#include <stdio.h>

int main()
{
	int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
	int N[] = {1, 3, 9, 7, 11, 15, 19};

	int num;
	do
	{
		scanf("%d", &num);
	} while (!(num >= 1 && num <= 20));

	int i;
	int found = 0;
	for (i = 0; i < sizeof(M) / sizeof(M[0]); i++)
	{
		if (M[i] == num)
		{
			printf("%d is in M at index [%d]\n", num, i);
			found = 1;
			break;
		}
	}

	for (i = 0; i < sizeof(N) / sizeof(N[0]); i++)
	{
		if (N[i] == num)
		{
			printf("%d is in N at index [%d]\n", num, i);
			found = 1;
			break;
		}
	}

	if (!found)
	{
		printf("%d is not in neither M nor N\n", num);
	}

	return 0;
}