#include <stdio.h>
int main()
{
    int a = 120;
    // wird min. einmal ausgeführt
    do
    {
        printf("a ist %d\n", a);
        a++;
    } while (a <= 10);
    // a ist 120 wird angezeigt
    // a ist 120 wird returned

    return 0;
}