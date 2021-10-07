#include<stdio.h>

int main()
{
    char hexArr[4] = " ";
   
    for(int i = 0; i <4; i++)
    {
        hexArr[i] = 0xAA;
    }

    printf(" float: %f\n signet int: %d\n unsigned int: %lu", (float)(*hexArr), (int)(*hexArr), (unsigned int)(*hexArr));
  
    return 0;
}