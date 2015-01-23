#include <stdio.h>
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("Result: (%.1f+%.1f)*(%.1f-%.1f)/%.1f=%.5f\n", a, b, a, b, c, (a+b)*(a-b)/c);
	return 0;
}