#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *bin(int );
char *dec(int );
char *reverse(char *);
int isPalindrome(const char *);

int main(int argc, char *argv[])
{
    int inputNum;

    scanf("%d", &inputNum);

    if (isPalindrome(bin(inputNum)) && isPalindrome(dec(inputNum)))
    {
        printf("It is a double-based palindrome (%s).\n", bin(inputNum));
    }
    else
    {
        printf("It is not a double-based palindrome (%s).\n", bin(inputNum));
    }

    return 0;
}

char *bin(int n)
{
    char str[1000] = "";
    char *ptr = str;
    char temp[2];

    do
    {
        sprintf(temp, "%d", n % 2);
        strcat(str, temp);
        n /= 2;
    } while (n != 0);

    return reverse(ptr);
}

char *dec(int n)
{
    char str[1000] = "";
    char *ptr = str;

    sprintf(str, "%d", n);

    return ptr;
}

char *reverse(char *s)
{
    char str[1000] = "";
    char *ptr = str;
    char temp[2];

    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        sprintf(temp, "%c", s[i]);
        strcat(str, temp);
    }

    return ptr;
}

int isPalindrome(const char *s)
{
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}
