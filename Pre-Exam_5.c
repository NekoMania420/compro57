#include <stdio.h>

void printWineGlass(int );

int main() {
	int size;
	do {
		scanf("%d", &size);
	} while(size % 2 == 0 || !(size >= 9));

	printWineGlass(size);

	return 0;
}

void body(int, int );
void base(int );

void printWineGlass(int w) {
	body(w, w / 2);
	base(w);
}

void body(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < i; j++) {
			putchar(' ');
		}
		for (int j = 0; j < w - (i * 2); j++) {
			putchar('*');
		}

		putchar('\n');
	}
}

void base(int w) {
	for (int i = 0; i < w; i++) {
		putchar('=');
	}

	putchar('\n');
}
