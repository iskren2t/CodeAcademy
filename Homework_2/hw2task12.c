#include<stdio.h>

void triangleUp();
void triangleDown();

int main()
{
    triangleUp();
    printf("\n\n");

    triangleDown();
    printf("\n\n");

    triangleDown();
    triangleUp();

    return 0;
}

void triangleUp()
{
    char arr[6][11];

    for(int i = 1; i <= 6; i ++)
    {
        for(int j = 1; j < i; j ++)
        {
            printf(" ");
        }         
     
        for(int j = 1; j <= (6*2 - ((2 * i) - 1)); j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

void triangleDown()
{
    char arr[6][11];

    for(int i = 1; i <= 6; i ++)
    {
        for(int j = i; j < 6; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= ((2 * i) - 1); j++)
        {
            printf("#");
        }
        printf("\n");
    }    
}