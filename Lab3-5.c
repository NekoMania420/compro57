#include <stdio.h>


int main()
{
	float c, r;

	scanf("%f", &c);

	r = c/2;

	printf("Volume: %.4f m^3\n", (4.0/3.0*3.1416*(r*r*r))/1000000.0);
	printf("Surface Area: %.4f m^2\n", 4.0*3.1416*(r*r)/10000.0);

	return 0;
}