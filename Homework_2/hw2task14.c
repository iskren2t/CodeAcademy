/*Напишете програма, която изчислява броя на секундите в една
година.*/

#include<stdio.h>

int main()
{
    int secondsInYear = 0;
    int seconds = 60;
    int minutes = 60;
    int hours = 24;
    int days = 365;
    
    secondsInYear = days * hours * minutes * seconds;

    printf("The seconds in a year are: %d", secondsInYear);

    return 0;
}