#include <stdio.h>
#include <string.h>

int main() {
    typedef unsigned char BYTE; //nutze anstatt char die Variable BYTE
    
    BYTE byte1 = 22;
    BYTE byte2 = 256; // 255 maximale darstellbare Zahl

    printf("%d\n", byte1);
    printf("%d\n", byte2);


    return 0;
}