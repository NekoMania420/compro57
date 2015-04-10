#include <stdio.h>
#include <string.h>

void ballPosition(char , char* );
void aType();
void bType();
void cType();

int ball[3] = {0, 0, 0};

int main() {
	char ballInit;
	char swapBall[1000];

	scanf("%c %s", &ballInit, swapBall);

	ballPosition(ballInit, swapBall);

	return 0;
}

void ballPosition(char start, char* swap) {
	/* Init */

	switch (start) {
		case 'L':
			ball[0] = 1;
			break;

		case 'C':
			ball[1] = 1;
			break;

		case 'R':
			ball[2] = 1;
			break;
	}

	/* Swapping */

	for (int i = 0; i < strlen(swap); i++) {
		switch (swap[i]) {
			case 'A':
				aType();
				break;

			case 'B':
				bType();
				break;

			case 'C':
				cType();
				break;
		}
	}

	/* Print ball position */

	if (ball[0]) {
		puts("L");
	} else if (ball[1]) {
		puts("C");
	} else {
		puts("R");
	}
}

void aType() {
	int temp = ball[0];
	ball[0] = ball[1];
	ball[1] = temp;
}

void bType() {
	int temp = ball[1];
	ball[1] = ball[2];
	ball[2] = temp;
}

void cType() {
	int temp = ball[0];
	ball[0] = ball[2];
	ball[2] = temp;
}
