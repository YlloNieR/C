#include <stdio.h>
#include <string.h>

struct Videos{
    int laenge;
    char autor[50];
}
Video;

int main() {
    struct Videos Video1;
    Video1.laenge = 10;
    strcpy(Video1.autor, "Ex Maschina");

    struct Videos Video2;
    Video2.laenge = 10;
    strcpy(Video2.autor, "The Morpheus");
    
    printf("%s",Video2.autor);
    return 0;
}