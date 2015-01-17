#include <stdio.h>

int main()
{
	char fname1[50], sname1[50], fullName[2][50];

	printf("fname1: ");
	scanf("%s", fname1);
	printf("sname1: ");
	scanf("%s", sname1);
	printf("fullname: ");
	scanf("%s %s", fullName[0], fullName[1]);
	printf("\n** Output **\n");
	printf("%s %s\n", fname1, sname1);
	printf("%s %s\n", fullName[0], fullName[1]);

	return 0;
}