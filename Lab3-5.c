#include <stdio.h>
#include <math.h>
#define PI 3.1416

int main()
{
	double cir, r;

	scanf("%lf", &cir);

	r = cir/2;

	printf("Volume: %.4lf m^3\n", (4*PI*pow(r, 3))/3.0/1000000.0);
	printf("Surface Area: %.4lf m^2\n", 4*PI*pow(r, 2)/10000.0);

	return 0;
}