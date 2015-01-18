#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char name[50], surname[50], id[8], dob[10], gpa[4];

	printf("Name: ");
	scanf("%s", name);
	printf("Surname: ");
	scanf("%s", surname);
	printf("ID: ");
	scanf("%s", id);
	printf("DOB: ");
	scanf("%s", dob);
	printf("GPA: ");
	scanf("%s", gpa);
	printf("** \\\\Output// **\n");
	printf("%s %s\n\n", name, surname);
	printf("%s\n\n", id);
	for (i=0; i<strlen(dob); i++)
	{
		if (dob[i] != '/')
		{
			printf("%c", dob[i]);
		}
		else
		{
			printf("-");
		}
	}
	printf("\n\n");
	printf("%s\n", gpa);

	return 0;
}