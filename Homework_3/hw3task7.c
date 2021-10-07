#include<stdio.h>

int main()
{
    char hexArr[8] = " ";

    for(int i = 0; i < 8; i++)
    {
        hexArr[i] = 0xBB;
    }

    printf("double: %lf\n", (double)(*hexArr) );
    printf("signed long long : %lld\n", (long long)(*hexArr));
    printf("unsigned long long: %llu",(unsigned long long)(*hexArr));
    
    return 0;
}