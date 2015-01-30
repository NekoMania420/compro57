#include <stdio.h>
#include <math.h>

int main()
{
	int wheels, inTime[3], outTime[3], toSecond[2], totalCost;
	float totalTime;

	printf("Number of wheels: ");
	scanf("%d", &wheels);
	printf("In Time: ");
	scanf("%d:%d:%d", &inTime[0], &inTime[1], &inTime[2]);
	printf("Out Time: ");
	scanf("%d:%d:%d", &outTime[0], &outTime[1], &outTime[2]);

	/* Convert time to second */
	toSecond[0] = inTime[0]*3600 + inTime[1]*60 + inTime[2];
	toSecond[1] = outTime[0]*3600 + outTime[1]*60 + outTime[2];

	/* Calculate total time */
	if (toSecond[0] > toSecond[1])
	{
		totalTime = ((86400-toSecond[0]) + toSecond[1]) / 3600.0;
	}
	else
	{
		totalTime = (toSecond[1]-toSecond[0]) / 3600.0;
	}

	/* First 15 minutes is free */
	if (totalTime <= 0.25)
	{
		totalCost = 0;
	}
	else
	{
		if (wheels == 2) // Motorcycle
		{
			if (ceil(totalTime) <= 3)
			{
				totalCost = 5*ceil(totalTime);
			}
			else
			{
				totalCost = 5*3 + 10*(ceil(totalTime)-3);
			}
		}
		else // Car
		{
			if (ceil(totalTime) <= 3)
			{
				totalCost = 10*ceil(totalTime);
			}
			else
			{
				totalCost = 10*3 + 20*(ceil(totalTime)-3);
			}
		}
	}

	/* Output */
	printf("Parking Fee: %d Baht\n", totalCost);

	return 0;
}