#include <stdio.h>
#include <math.h>

int main()
{
    char numStr[3];

    gets(numStr);

    int sepDigit[2] = {numStr[0] - '0', numStr[1] - '0'};

    while (sepDigit[0] > 1 || sepDigit[1] > 1)
    {
        printf("%d%d->", sepDigit[0], sepDigit[1]);

        sepDigit[0] = floor(sqrt(sepDigit[0]));
        sepDigit[1] = floor(sqrt(sepDigit[1]));
    }

    printf("%d\n", 11);

    return 0;
}
