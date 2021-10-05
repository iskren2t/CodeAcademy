#include<stdio.h>

int main()
{
    double a = 4.9876543;
    double b = 7.123456789012345678890;
    double c = 18398458438583853.28;
    double d = 18398458438583853.39875937284928422; 

    double var2 = 7.1234567890123456789123456789;

    printf("\na = %.7f \nb = %.21lf \nc = %.2lf \nd = %.17lf", a, b, c, d);

    return 0;
}