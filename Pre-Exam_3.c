#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int isString(char *);
int toNumber(char *);
int numToNum(char *);

int main() {
	char inputA[1000], inputB[1000];
	gets(inputA);
	gets(inputB);

	int a, b;

	if (isString(inputA)) {
		a = toNumber(inputA);
	} else {
		a = numToNum(inputA);
	}

	if (isString(inputB)) {
		b = toNumber(inputB);
	} else {
		b = numToNum(inputB);
	}

	printf("%d\n", a + b);

	return 0;
}

int isString(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		if (isdigit(s[i])) {
			return 0;
		}
	}

	return 1;
}

int toNumber(char *s) {
	char word[][1000] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

	for (int i = 0; i < sizeof(word) / sizeof(word[0]); i++) {
		if (strcmp(s, word[i]) == 0) {
			return i;
		}
	}

	return 0;
}

int numToNum(char *s) {
	int numArr[strlen(s)];

	for (int i = 0; i < strlen(s); i++) {
		numArr[i] = (int)s[i] - '0';
	}

	int sum = 0;

	for (int i = strlen(s) - 1, j = 0; i >= 0; i--, j++) {
		sum += numArr[j] * pow(10, i);
	}

	return sum;
}
