#include <stdio.h>

int main() {
	int age;
	scanf("%d", &age);

	age >= 66 && age <= 100 ? puts("The Golden Years") : age >= 23 && age <= 65 ? puts("Working for the man") : age >= 19 && age <= 22 ? puts("College") : age >= 15 && age <= 18 ? puts("High school") : age >= 12 && age <= 14 ? puts("Middle school") : age >= 5 && age <= 11 ? puts("Elementary school") : age >= 3 && age <= 4 ? puts("Preschool Maniac") : age >= 0 && age <= 2 ? puts("Still in Mama's arms") : puts("This program is for humans");

	return 0;
}