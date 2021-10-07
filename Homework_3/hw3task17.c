#include<stdio.h>

double circleFuncction(const double pi, double r);
double ellipseFunction(const double pi, double A, double B);

int main()
{
    const double pi = 3.14159;
    double r1 = 1, r2 = 1.5, r3 = 13;
    double a = 4.5, b = 1.9;

    printf("S1 = %lf\n", circleFuncction(pi, r1));
    printf("S2 = %lf\n" , circleFuncction(pi, r2));
    printf("S3 = %lf\n", circleFuncction(pi, r3));

    printf("S = %lf\n", ellipseFunction(pi, a, b));    

    return 0;
}

double circleFuncction(const double pi, double r)
{
    return (pi*r*r);
}

double ellipseFunction(const double pi, double A, double B)
{
    return (pi*A*B);
}