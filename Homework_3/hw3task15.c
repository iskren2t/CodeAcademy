#include<stdio.h>

void test();

int main()
{
    test();
    test();
    test();

    return 0;

}

void test()
{
    static count = 0;
    count++;
    printf("\n%d", count);
}