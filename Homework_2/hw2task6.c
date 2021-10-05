#include<stdio.h>

int main()
{
    char a = -127;
    unsigned char b = 255;
    unsigned short int c = 63498;
    unsigned int d = 4294967292;
    long long int e = -9000000000000775845;

    printf("a = %d\nb = %d\nc = %hu\nd = %u\ne = %lld\n", a, b, c, d, e);

    return 0;
}