#include <stdio.h>
#include <string.h>

int main() {
	char text[1000];

	char firstName[1000], lastName[1000], birthYear[1000];

	for (int i = 0; i < 5; i++) {
		gets(text);
		sscanf(text, "%s %s %s", firstName, lastName, birthYear);

		printf("%s%s%s@it.kmitl.ac.th\n", firstName, lastName, birthYear);
	}

	return 0;
}
