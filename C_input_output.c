#include <stdio.h>
#include <string.h>

int main() {
    //int c;
    char str[100];
    int i;
    printf("gib mir fuenf: ");
    //c = getchar();
    //gets(str);
    
    //putchar(c);
    //puts(str);
    scanf("%s %d",str, &i);
    printf("Deine Eingabe: %s %d",str,i);

    return 0;
}