#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[2], ch2[2];
    int pos;

    scanf("%s %s %d", ch1, ch2, &pos);

    char strArr[1000][1000];

    strcpy(strArr[0], ch1);
    strcpy(strArr[1], ch2);

    if (pos > 2)
    {
        for (int i = 2; i < pos; i++)
        {
            sprintf(strArr[i], "%s%s", strArr[i - 2], strArr[i - 1]);
        }
    }

    puts(strArr[pos - 1]);

    return 0;
}
