#include <stdio.h>

int main()
{
    int franzjosef = 42;
    int hans;
    hans = 23;
    int summe = franzjosef + hans;
    printf("Hello World! \t %d \n");
    printf("Summe: \t\t %d \n",summe);
    printf("franzjosef: \t %d \n", franzjosef);

    unsigned int plusplus = 2000000000;
    unsigned int minusminus = -2000000000;
    printf("plusplus \t %d \n",plusplus);
    printf("minusminus \t %d \n",minusminus);
    printf("plusplus U \t %u \n",plusplus);
    printf("minusminus U \t %u \n",minusminus);

    float FLOATZAHL = 2.3;
    float floatrechnung = FLOATZAHL - hans;
    printf("FLOATZAHL: \t %f \n",FLOATZAHL);
    printf("floatrechnung: \t %f \n",FLOATZAHL);

    char gibC = 'c';
    printf("gib mir ein C: \t %d \n\n",gibC);
    
    int buchstabeAlsZahl = floatrechnung + gibC;
    printf("buchstabenRechnung als Zahl ausgeben =      \t%d \n",buchstabeAlsZahl);
    printf("buchstabenRechnung als buchstabe ausgeben = \t%c \n",buchstabeAlsZahl);

    const float PI =3.14;
    printf("\nKonstnte Pi= \t %f \n",PI);

    return 0;
}