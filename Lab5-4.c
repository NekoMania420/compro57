#include <stdio.h>

int main()
{
	int i, x, n, total = 1;
	scanf("%d %d", &x, &n);

	i = n - 1;

	if (i != 0)
	{
		do {
			total *= x;
			i--;
		} while (i >= 1);
	}

	printf("%d^(%d-1)=%d\n", x, n, total);

	return 0;
}