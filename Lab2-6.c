#include <stdio.h>

int main()
{
	float a=3.1415;
	int i=12345, j=-6789, k=24500;
	printf("123456789012345678901234567890\n");
	printf("%d %d %d\n", i, j, k);
	printf("%3d %3d %3d\n", i, j, k);
	printf("%8d %8d %8d\n", i, j, k);
	printf("%08d %08d %08d\n", i, j, k);
	printf("%-8d %-8d %-8d\n", i, j, k);
	printf("%10f\n", a);
	printf("%3f\n", a);
	printf("%-10f\n", a);
	printf("%-10.3f\n", a);
	printf("%10.2f\n", a);
	printf("%.1f\n", a);
	printf("%.3f\n", a);

	return 0;
}