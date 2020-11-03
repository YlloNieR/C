#include <stdio.h>
#include <string.h>

// Verwendungsbeispiel: Gleitkommazahl oder Integer notwendig

struct hallo{
    int a;
    char b;
} hallo;


union hello {
    int a;
    char b;
} hello;

int main() {
    union  hello x;
    x.a = 42;
    x.b = 'a';
    printf("%d\n", x.a);

    return 0;
}