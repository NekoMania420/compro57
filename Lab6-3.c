#include <stdio.h>

int main()
{
	float mtrx[3][3];

	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%f", &mtrx[i][j]);
		}
	}

	int sameNumber = 1, zeroAll = 1;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i != j)
			{
				if (mtrx[i][j] != 0.0)
				{
					zeroAll = 0;
				}
			}
			else
			{
				if (i != 0)
				{
					if (mtrx[i][j] != mtrx[0][0])
					{
						sameNumber = 0;
					}
				}
			}
		}
	}

	if (sameNumber && zeroAll)
	{
		puts("This is a scalar matrix");
	}
	else
	{
		puts("This is not a scalar matrix");
	}

	return 0;
}