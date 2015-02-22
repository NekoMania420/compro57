#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void possiblePow(int , int );
int isRepeat(int *, int , int , int);
int *sort(int *, int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	possiblePow(a, b);

	return 0;
}

void possiblePow(int a, int b)
{
	int *numList = (int *)malloc(10000);

	int i, j, p = 0;
	for (i = a; i <= b; i++)
	{
		for (j = a; j <= b; j++)
		{
			numList[p] = pow(i, j);
			p++;
		}
	}

	int *numListNoRepeat = (int *)malloc(10000);
	int pNR = 0;
	for(i = 0; i < p; i++)
	{
		if (isRepeat(numList, numList[i], i + 1, p))
		{
			numListNoRepeat[pNR] = numList[i];
			pNR++;
		}
	}

	for (i = 0; i < pNR; i++)
	{
		printf("%d ", sort(numListNoRepeat, pNR)[i]);
	}
}

int isRepeat(int *nList, int n, int start, int end)
{
	int i, j;
	for (i = start; i <= end; i++)
	{
		if (nList[i] == n)
		{
			return 0;
		}

	return 1;
}

int *sort(int *nList, int len)
{
	int i, j, temp;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (nList[i] > nList[j])
			{
				temp = nList[i];
				nList[i] = nList[j];
				nList[j] = temp;
			}
		}
	}

	return nList;
}