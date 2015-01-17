#include <stdio.h>

int main()
{
	char name[50];
	int birthYear, currentYear;

	scanf("%[^\n]s", name);
	scanf("%d %d", &birthYear, &currentYear);

	printf("%s is %d years old.\n", name, currentYear-birthYear);

	return 0;
}