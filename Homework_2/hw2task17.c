/*Пребройте последователностите от вида '010' в побитовия запис на числото.*/

#include<stdio.h>

int main()
{
    char arr[6] = {'1','0','1','0','1','0'};
    int count = 0;

    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == 0 && arr[i+1] == 1 && arr[i+2] == 0);
        {
            count++;
        }
    }
    printf("The count of 010 is: %d", count);

    return 0;
}