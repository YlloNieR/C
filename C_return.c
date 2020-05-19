#include <stdio.h>

int berechnung()
{
    int a = 5 + 5;
    return a;
}

int main()
{
    int ergebnisVonBerechnung = berechnung();

    printf("a = %d\n",ergebnisVonBerechnung);

    return 0;
}

