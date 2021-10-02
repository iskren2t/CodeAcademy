#include<stdio.h>

int main()
{
    double ounces;

    do
    {
        printf("How many ounces do you want: ");
        scanf("%lf", &ounces);
    } while(ounces<0);

    printf("You want %lf cups.", (ounces/8));

    return 0;
}