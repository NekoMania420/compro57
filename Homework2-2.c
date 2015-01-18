#include <stdio.h>

int main()
{
	int id;
	char name[100];
	unsigned int totalCost, youPay;

	scanf("%d", &id);
	scanf(" %[^\n]s", name);
	scanf("%u", &totalCost);
	scanf("%u", &youPay);

	/* Calculation */
	int number[6];
	int change = youPay-totalCost;
	number[0] = change/500;
	number[1] = (change%500)/100;
	number[2] = ((change%500)%100)/50;
	number[3] = (((change%500)%100)%50)/10;
	number[4] = ((((change%500)%100)%50)%10)/5;
	number[5] = ((((change%500)%100)%50)%10)%5;

	/* Output */
	printf("                              Transaction ID: %03d\n", id);
	printf("- %s -\n", name);
	printf("Change: %d\n", change);
	printf("+-----------------------------------------------+\n");
	printf("| Coin\\Bank |    1|    5|   10|   50|  100|  500|\n");
	printf("+-----------------------------------------------+\n");
	printf("| Number    | %4u| %4u| %4u| %4u| %4u| %4u|\n", number[5], number[4], number[3], number[2], number[1], number[0]);
	printf("+-----------------------------------------------+\n");

	return 0;
}