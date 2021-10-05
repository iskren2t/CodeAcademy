/*Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой*/
#include<stdio.h>

int main()
{
    float tomatoes = 4.5; 
    float flour = 1.80; 
    float candy = 1.50; 
    float yoghurt = 0.50;
    float iceCream = 0.60;
    float lollipop = 0.15;
    float sum = 0.0;
    float amount = 0.0;
    int cond = 0;

    while(cond != 7)
    {
        printf("What would like to buy?\n ");
        printf("1. Tomatoes\n");
        printf("2. Flour\n");
        printf("3. Candy\n");
        printf("4. Yoghurt\n");
        printf("5. Ice cream\n");
        printf("6. Lollipop\n");
        printf("7. Nothing\n");
        scanf("%d", &cond);

        switch (cond)
        {
        case 1:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * tomatoes);
            printf("You owe: %.2f BGN\n\n", sum);
            break;
        case 2:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * flour);
            printf("You owe: %.2f BGN\n\n", sum);
            break;
        case 3:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * candy);
            printf("You owe: %.2f BGN\n\n", sum);
            break;
        case 4:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * yoghurt);
            printf("You owe: %.2f BGN\n\n", sum);
            break;        
        case 5:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * iceCream);
            printf("You owe: %.2f BGN\n\n", sum);
            break;    
        case 6:
            printf("Amount? ");
            scanf("%f", &amount);
            sum += (amount * lollipop);
            printf("You owe: %.2f BGN\n\n", sum);
            break;
        case 7:
            printf("Bye!\n");
            break;
        default:
            printf("Invalid option.\n\n");
            break;
        };
    }

    return 0;
}
