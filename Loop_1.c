#include <stdio.h>

int main()
{
	int i, j;
	scanf("%d", &j);
	for (i=0; i<j; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}

	return 0;
}