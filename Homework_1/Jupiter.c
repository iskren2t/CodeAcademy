#include<stdio.h>

double convFunct( double days);

int main()
{
    double days;
    do
    {
        printf("Enter a lot of days: ");
        scanf("%lf", &days);
    } while (days < 0);

    double yearsJup = convFunct(days);
    printf("On the Jupiter these days are %lf year/s.", yearsJup );

    return 0;
}

double convFunct( double days)
{
    return (days/4380);
}