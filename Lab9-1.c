#include <stdio.h>
#include <string.h>

void strFib(char , char , int );

int main(int argc, char *argv[])
{
    char ch1, ch2;
    int pos;

    scanf("%c %c %d", &ch1, &ch2, &pos);

    strFib(ch1, ch2, pos);

    return 0;
}

void strFib(char ch1, char ch2, int pos)
{
    char strArr[1000][1000];

    sprintf(strArr[0], "%c", ch1);
    sprintf(strArr[1], "%c", ch2);

    if (pos > 2)
    {
        for (int i = 2; i < pos; i++)
        {
            sprintf(strArr[i], "%s%s", strArr[i - 2], strArr[i - 1]);
        }
    }

    puts(strArr[pos - 1]);
}
