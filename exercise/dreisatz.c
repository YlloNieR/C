#include <stdio.h>

int main()
{
    char eingabe;

    int A;
    int B;
    int C;
    int D;

    double E;

    char nochmal = 'j';

    while (nochmal == 'j' || nochmal == 'J')
    {
        printf("Dreisatzberechnung \n");
        printf("\n");
        printf("A = bezieht sich die Aufgabe auf einen Geraden / direkten bzw. proportionalen Dreisatz\n");
        printf("B = Oder auf einen Ungeraden, indirekten Dreisatz?\n");
        printf("Waehle A oder B: ");

        eingabe = getchar();

        if (eingabe == 'A'|| eingabe == 'a')
        {
            printf("\n");
            printf("Du hast A gewaehlt\n");
            printf("\n");
            printf("Das Schema ist besipielsweise:\n");
            printf("\n");
            printf("\t5 Arbeiter = 20 Teile \n");
            printf("\t1 Arbeiter = 20 : 5 = 4 Teile\n");
            printf("\t8 Arbeiter = 4 * 8 = 32 Teile\n");
            printf("\n");
            printf("Nun wandeln wir das Beispiel in variablen um:\n");
            printf("\t \n");
            printf("\tA = B \n");
            printf("\tC = B : A \n");
            printf("\tE = C * D = E\n");
            printf("\n");
            printf("Gib Variable A ein:\n");
            scanf("%d", &A);
            printf("Gib Variable B ein:\n");
            scanf("%d", &B);
            printf("Gib Variable D ein:\n");
            scanf("%d", &D);
            C = (double)B / (double)A;
            E = C * D;
            printf("Das Ergebnis lautet: \n");
            printf("%.2f\n", E);
            printf("\n");
            printf("Moechtest du noch eine Aufgabe loesen? (J/N)\n");
            scanf(" %c", &nochmal);
            printf("\n");
        }
        else
        {
            printf("\n");
            printf("Du hast B gewaehlt");
            printf("\n");
            printf("Das Schema ist besipielsweise:\n");
            printf("\n");
            printf("\t5 Arbeiter = 20 Stunden \n");
            printf("\t1 Arbeiter = 20 * 5 = 100 Stunden\n");
            printf("\t8 Arbeiter = 100 : 8 = 12,5 Stunden\n");
            printf("\n");
            printf("Nun wandeln wir das Beispiel in variablen um:\n");
            printf("\t \n");
            printf("\tA = B \n");
            printf("\tC = B * A \n");
            printf("\tE = C : D = E\n");
            printf("\n");
            printf("Gib Variable A ein:\n");
            scanf("%d", &A);
            printf("Gib Variable B ein:\n");
            scanf("%d", &B);
            printf("Gib Variable D ein:\n");
            scanf("%d", &D);
            C = B * A;
            E = (double)C / (double)D;
            printf("Das Ergebnis lautet: \n");
            printf("%.2f\n", E);
            printf("\n");
            printf("Moechtest du noch eine Aufgabe loesen? (J/N)\n");
            scanf(" %c", &nochmal);
            printf("\n");
        }
    }
    return 0;
}