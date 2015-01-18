#include <stdio.h>

int main()
{
	int base10, base16, base8;

	scanf("%d", &base10);
	scanf("%x", &base16);
	scanf("%o", &base8);

	printf("%d %X %o\n", base10, base10, base10);
	printf("%d %X %o\n", base16, base16, base16);
	printf("%d %X %o\n", base8, base8, base8);

	return 0;
}