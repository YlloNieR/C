#include <stdio.h>
#include <stdbool.h>

int main()
{
    // 1. part of exercise
    char name[] = "name";
    printf("Hello, World!\n");
    printf("Hello, %s!\n", name);
    printf("\n");

    /*
    // 2. part of exercise
    char nameInput[100];    
    printf("Hallo, wie ist ihr Name?");
    scanf("%s", nameInput);
    printf("Hello, %s!\n", nameInput);
    printf("\n");
    */

    int zahl1 = 5;
    printf("Hier sollte 5 stehen: \n");
    printf("%d\n", zahl1);

    int zahl2 = 7;
    printf("Hier steht eine 7:");
    printf("%d\n", zahl2);

    int zahl3 = 12;
    printf("Hier steht eine 12:");
    printf("%d\n", zahl3);

    int ergebnis = zahl1 - zahl2;
    printf("Hier steht das Ergebnis von zahl1 - zahl2 (-2):\n");
    printf("%d\n", ergebnis);
    printf("\n");

    float zahl4float = 1.5;
    double zahl4 = 1.5;
    printf("Hier steht eine Kommazahl(float) 1.5:\n");
    printf("%.2f\n", zahl4float);
    printf("%.2lf\n", zahl4float);

    // printf treats double and float same way
    printf("Hier steht eine Kommazahl(double) 1.5:\n");
    printf("%.2lf\n", zahl4);
    printf("%.2f\n", zahl4);
    printf("Hier wird der Kommazahl der Rest abgeschnitten:\n");
    printf("%d\n", (int)zahl4);
    printf("\n");

    char c = 'F';
    printf("Hier steht ein F [in char]:\n");
    printf("%c\n", c);
    printf("\n");

    char motivation[] = " 5 lines still to go ;) ";
    printf("%s\n", motivation);

    bool wahrheitswert = ergebnis < zahl3;
    printf("Ist das Ergebnis kleiner als zahl3?:\n");
    printf("%d\n", wahrheitswert); // 1 or 0
    printf(wahrheitswert ? "true\n" : "false\n");
    printf("%s", wahrheitswert ? "true\n" : "false\n");
    fputs(wahrheitswert ? "true\n" : "false\n", stdout);

    printf("Gut gemacht!");
    
    return 0;
}