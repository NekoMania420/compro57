#include <stdio.h>

int main()
{
	int wheels;
	char inTime[8], outTime[8];
	printf("Number of wheels: ");
	scanf("%d", &wheels);
	printf("In Time: ");
	scanf("%s", inTime);
	printf("Out Time: ");
	scanf("%s", outTime);
	printf("%s\n", inTime);

	return 0;
}