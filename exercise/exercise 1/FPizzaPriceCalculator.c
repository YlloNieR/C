#include <stdio.h>

int main()
{
    double emptyPizzaPrice = 6.50;
    double pizzaToppingPrice = 0.50;
    double tmp = 0;
    int pizzaCount = 0;
    int pizzaToppingCount = 0;
    char endOption = 'y';

    while (endOption == 'y')
    {
        pizzaCount++;
        printf("How many pizza toppings do you want at this pizza?\n");
        int input;
        scanf("%d", &input); getchar();
        pizzaToppingCount = pizzaToppingCount + input;
        double calculatePrice = (input * pizzaToppingPrice) + emptyPizzaPrice;

        tmp = tmp + calculatePrice;
        printf("Current costs for %d pizzas and %d toppings: %.2f Euro\n", pizzaCount, pizzaToppingCount, tmp);
        printf("Do you want one more pizza?(y/n)\n");
        char inputChar = getchar();        
        endOption = inputChar;
    }

    printf("This will cost you %.2f Euro", tmp);
    return (0);
}