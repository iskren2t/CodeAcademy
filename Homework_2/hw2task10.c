/*Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които
клиента дължи на компанията. Принтирайте резултата.*/

#include<stdio.h>

void calcFunctin(int price);

int main()
{

    int caravans = 3;
    int campers = 3;
    int days = 0;
    int caravanPrice = 90.0;
    int camperPrice = 100.0;
    char cond;

      
    printf("\nIf you want to rent a caravan enter 1.\n");
    printf("If you want to rent a camper enter 2.\n");
    printf("If you want to exit the menu enter 3.\n");
    scanf("%c", &cond);

    switch (cond)
    {
        case '1':
            calcFunctin(caravanPrice);
            break;
        case '2':
            calcFunctin(camperPrice);
            break;
        case '3':
            printf("Bye!\n");
            break;
        default:
            printf("Invalid option.\n");
            break;
    };

    return 0;
}

void calcFunctin(int price)
{
    int days = 0;
    printf("For how many days you want to rent it?\n");
    scanf("%d", &days);
    printf("You owe %d BGN.\n", (days*price));
}