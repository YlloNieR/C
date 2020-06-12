#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptr;
    char buffer[255];
    ptr = fopen("C:/Users/Oliver Rein.DESKTOP-6TPP48V/Documents/GitHub/C/first.txt","r+");        // Lesen
    // ptr = fopen("/home/morpheus/Tuts/C/first.txt","w+");     // Schreiben
    // ptr = fopen("/home/morpheus/Tuts/C/first.txt","a+");
    fscanf(ptr, "%s", buffer);
    printf("ertses mal Lesen: %s",buffer);

    return 0;
}