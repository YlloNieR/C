#include <stdio.h>

int funktion()
{
    printf("funktion\n");
}

int funktion2()
{
    printf("funktion2\n");
}

int main()
{
    funktion();
    funktion();
    funktion2();
    funktion2();
    printf("main\n");

    return 0;
}

