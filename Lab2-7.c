#include <stdio.h>

int main()
{
	char str1[50], str2[50], str3[50], str4[50];

	printf("String 1: ");
	scanf("%s", str1);
	printf("String 2: ");
	scanf("%s", str2);
	printf("String 3: ");
	scanf("%s", str3);
	printf("String 4: ");
	scanf("%s", str4);
	printf("** \"Output\" **\n");
	printf("%.3s\n", str1);
	printf("%.4s\n", str2);
	printf("%.5s\n", str3);
	printf("%.6s\n", str4);

	return 0;
}