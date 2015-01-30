#include <stdio.h>

int main()
{
	float score;
	scanf ("%f", &score);

	if (score >= 80 && score <= 100)
	{
		putchar ('A');
	}
	else if (score >= 70 && score < 80)
	{
		putchar ('B');
	}
	else if (score >= 60 && score < 70)
	{
		putchar ('C');
	}
	else if (score >= 50 && score < 60)
	{
		putchar ('D');
	}
	else if (score >= 0 && score < 50)
	{
		putchar ('F');
	}
	else
	{
		puts ("Out of Range");
	}

	return 0;
}