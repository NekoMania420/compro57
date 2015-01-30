#include <stdio.h>
#define PI 3.14159265358979323846

int main()
{
	char type;
	double b, h, r;
	printf ("Geometry Type (c-circle, t-triangle, r-rectangle): ");
	scanf ("%c", &type);

	switch (type)
	{
		case 't':
		case 'T':
			printf ("Enter base length (cm): ");
			scanf ("%lf", &b);
			printf ("Enter height (cm): ");
			scanf ("%lf", &h);
			printf ("Area of this triangle is %.1lf square centimetres\n", 0.5*b*h);
			break;

		case 'c':
		case 'C':
			printf ("Enter radius (cm): ");
			scanf ("%lf", &r);
			printf ("Area of this circle is %.1lf square centimetres\n", PI*r*r);
			break;

		case 'r':
		case 'R':
			printf ("Enter base width (cm): ");
			scanf ("%lf", &b);
			printf ("Enter height (cm): ");
			scanf ("%lf", &h);
			printf ("Area of this rectangle is %.1lf square centimetres\n", b*h);
			break;

		default:
			puts("Invalid Input");
	}

	return 0;
}