#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Hello";
    int strSize = strlen(str);
    char rts[strSize];
    int j = 0;

    for(int i = strSize-1; i >= 0; i--)
    {
        rts[j] = str[i];
        //printf("%c ", rts[j]);
        j++;
    }

    printf("\n%s", rts);

    return 0;
}