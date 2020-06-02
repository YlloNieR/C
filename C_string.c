#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = {'h','i','\0'};
    char nochEiner[] = "WTF";
    char ergebnis[10];
    strcpy(ergebnis, nochEiner);
    strcat(ergebnis, myString);

    printf("myString = %s\n", myString);
    printf("ergebnis beinhaltet WTF = %s\n", nochEiner);
    printf("ergebnis beinhaltet hi %s\n", ergebnis);
    printf("Anzahl der Zeichen in ergebnis = %d\n", strlen(ergebnis));
    printf("Speicher von strlen = %x\n", ergebnis);
    return 0;
}