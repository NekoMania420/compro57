#include <stdio.h>

void printIntersectSet(int [], int []);

int i, j;

int main()
{
	int setA[20], setB[20];

	for (i = 0; i < 20; i++)
	{
		scanf("%d", &setA[i]);
	}

	for (i = 0; i < 20; i++)
	{
		scanf("%d", &setB[i]);
	}

	printIntersectSet(setA, setB);

	return 0;
}

void printIntersectSet(int a[], int b[])
{
	int intersect[20], pos = 0;

	for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (a[i] == b[j])
			{
				intersect[pos] = a[i];
				pos++;
				break;
			}
		}
	}

	if (!pos)
	{
		puts("Empty set");
	}
	else
	{
		printf("{ ");
		for (i = 0; i < pos; i++)
		{
			i != pos - 1 ? printf("%d, ", intersect[i]) : printf("%d", intersect[i]);
		}
		printf(" }\n");
	}
}