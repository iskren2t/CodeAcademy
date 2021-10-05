/*7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000*/

#include<stdio.h>

int main()
{
    short int a = 24212;
    int b= -1357674;
    int c = 1357674;
    int d = -1357674000;
    unsigned int e = 3657895000;

    printf("a = %hd\nb = %d\nc = %d\nd = %d\ne = %u\n", a, b, c, d, e);
    
    return 0;
}