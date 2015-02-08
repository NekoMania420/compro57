#include <stdio.h>

int main() {
	int start, end = 1;
	scanf("%d", &start);

	do {
		printf("%d ", start);
		start--;
	} while (start >= 1);

	return 0;
}