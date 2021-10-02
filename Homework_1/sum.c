#include<stdio.h>

int addDigit(int a, int b);

int main()
{
    int a = 0, b = 0;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);

    printf("The sym is: %d", addDigit(a,b));

    return 0;
}

int addDigit(int a, int b)
{
    return (a+b);
}