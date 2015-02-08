#include <stdio.h>
#define LIMIT 50

int main()
{
	int id, height, age, i;
	int condition[2] = {0, 0};
	float sum[2] = {0, 0};

	for (i = 0; i < LIMIT; i++)
	{
		scanf("%d: %d %d", &id, &height, &age);
		age > 15 && height >= 175 ? ++condition[0] : 0;
		age > 20 && height >= 180 ? ++condition[1] : 0;
		sum[0] += age;
		sum[1] += height;
	}

	printf("#Age>15 and Height >= 175: %d\n", condition[0]);
	printf("#Age>20 and Height >= 180: %d\n", condition[1]);
	printf("Average Age: %.2f\n", sum[0] / LIMIT);
	printf("Average Height: %.2f\n", sum[1] / LIMIT);

	return 0;
}