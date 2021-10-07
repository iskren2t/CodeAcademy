#include<stdio.h>

extern int gInt = 0;

void test();

int main()
{
    test();
    test();
    test();

    printf("%d", gInt);
    return 0;
}

void test()
{
    gInt++;
}