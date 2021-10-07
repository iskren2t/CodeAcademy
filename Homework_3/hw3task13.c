#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[] = "HELLO";

    for(int i = 0; i <= strlen(str); i++)
    {
        printf("%c", tolower(str[i]));
    }

    /*for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'H') 
        { 
            str[i] = 'h';
        }
        else if(str[i] == 'E') 
        { 
            str[i] = 'e';
        }
        else if(str[i] == 'L') 
        { 
            str[i] = 'l';
        }
        else if(str[i] == 'O') 
        { 
            str[i] = 'o';
        }
    }
    printf("%s", str);*/

    return 0;
}