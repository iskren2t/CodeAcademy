#include<stdio.h>

void calcFunction(double dPrice);

int main()
{

    int iCaravans = 3;
    int iCampers = 3;
    int iDays = 0;
    double dCaravanPrice = 90.0;
    double dCamperPrice = 100.0;
    int iCond = 0;
    int iSecondCond = 0;

    
        printf("\nIf you want to rent a caravan enter 1.\n");
        printf("If you want to rent a camper enter 2.\n");
        printf("If you want to exit the menu enter 3.\n");
        scanf("%d", &iCond);

        switch (iCond)
        {
            case 1:
                calcFunction(dCaravanPrice);
                break;
            case 2:
                calcFunction(dCamperPrice);
                break;
            case 3:
                printf("Bye!\n");
                break;
            default:
                printf("Invalid option.");
                break;
        };

        printf("Do you want something else? (1 -> yes) ");
        scanf("%d", &iSecondCond);

        if(iSecondCond == 1)
        {
            printf("\nIf you want to rent a caravan enter 1.\n");
            printf("If you want to rent a camper enter 2.\n");
            printf("If you want to exit the menu enter 3.\n");
            scanf("%d", &iCond);

            switch (iCond)
            {
                case 1:
                    calcFunction(dCaravanPrice);
                    break;
                case 2:
                    calcFunction(dCamperPrice);
                    break;
                case 3:
                     printf("Bye!\n");
                    break;
                default:
                    printf("Invalid option.");
                    break;
        };
        }
   
        else 
        {
            printf("Bye!");
        }
    return 0;
}

void calcFunction(double dPrice)
{
    int days = 0;
    static double iSum = 0;

    printf("For how many days you want to rent it?\n");
    scanf("%d", &days);
    printf("\nYou owe %.2lf BGN.\n", (days*dPrice));
    iSum += (days*dPrice);
    printf("The total sum is: %.2lf BGN.\n", iSum);
}