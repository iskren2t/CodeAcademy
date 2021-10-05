/* Обърнете битовете на числото, намиращи се на нечетни позиции.*/

#include<stdio.h>

int main()
{
    char arr[32] = "1000110110";
    for(int i = 0; i < 10; i++)
    {
        if((i%2) == 1)
        {
            if(arr[i]=='0')
            {
                arr[i] = '1';
            }
            else if(arr[i]=='1')
            {
                arr[i] = '0';
            }
        }
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}