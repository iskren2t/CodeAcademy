#include<stdio.h>

double calculate( double weight );

int main()
{
    double weight = 0;
    double weightMoon = 0;

    do
    {
        printf("Enter your weight: ");
        scanf("%lf", &weight);
    } while (weight <= 0);
    
    weightMoon = calculate(weight);
    printf("Your weight on the Moon will be: %lf kg.", weightMoon);

    return 0;

}

double calculate( double weight )
{
    return ((weight*17)/100); 
}