#include <stdio.h>

void printMat(int );

int main() {
	int size;
	scanf("%d", &size);

	printMat(size);

	return 0;
}

void printMat(int size) {
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			putchar(' ');
		}

		for (int j = 0; j < size; j++) {
			printf("# ");
		}

		putchar('\n');
	}
}
