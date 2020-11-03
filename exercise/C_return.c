#include <stdio.h>

int x = 5; //global

int berechnung()
{
    int a = 5 + 5;
    return a;
}

int main()
{
    int ergebnisVonBerechnung = berechnung();

    printf("a = %d\n", ergebnisVonBerechnung);

    return 0;
}

int hardcoreberechnung(int x, int y)
{
    return x;
}
