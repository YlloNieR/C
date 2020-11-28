#include <stdio.h>
#include <stdbool.h>

int main()
{
    float fuelConsumptionCalculation;
    float oilConsumptionCalculation;

    double fuelConsumption = 6.8 / 100;
    double oilConsumption = 0.5 / 1000;

    while (true)
    {
        printf("Please enter the distance (in km): \n");
        float input;
        scanf("%f", &input); getchar();

        fuelConsumptionCalculation = fuelConsumption * input;
        oilConsumptionCalculation = oilConsumption * input;

        printf("Your fuelconsumption is %g liters per kilometer\n", fuelConsumptionCalculation);
        printf("Your oilconsumption is %g liters per kilometer\n", oilConsumptionCalculation);
        float fuelConsumptionPriceCalculation = fuelConsumptionCalculation * 1.207;
        float oilConsumptionPriceCalculation = oilConsumptionCalculation * (37.47 / 5);
        printf("Your fuelconsumption costs %.2f Euro\n", fuelConsumptionPriceCalculation);
        printf("Your oilconsumption costs %.2f Euro\n", oilConsumptionPriceCalculation);
        printf("");
    }
    return (0);
}