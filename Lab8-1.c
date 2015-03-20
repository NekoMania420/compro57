#include <stdio.h>
#include <math.h>

int isPrime(int );
void goldbach(int , int );
int previousPrime(int );

int main(int argc, char *argv[])
{
    int inputNum;

    scanf("%d", &inputNum);

    if (isPrime(inputNum) || inputNum <= 0)
    {
        puts("Goldbach is false.");
    }
    else if (inputNum % 2 == 0)
    {
        puts("It is an even number!");
    }
    else
    {
        goldbach(inputNum, previousPrime(inputNum));
    }

    return 0;
}

int isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int previousPrime(int n)
{
    for (int i = n - 1; i >= 2; i--)
    {
        if (isPrime(i))
        {
            return i;
        }
    }
}

void goldbach(int curr, int prev)
{
    for (int i = 1; ; i++)
    {
        float result = prev + 2 * pow(i, 2);
        // printf("%d, %d -> %f\n", curr, prev, result);

        if (result == curr)
        {
            printf("%d + (2x(%d^2))\n", prev, i);
            break;
        }
        else if (result > curr)
        {
            goldbach(curr, previousPrime(prev));
            break;
        }
    }
}
