#include <stdio.h>

int main()
{
    int a[3] = {42, 1337, 50};
    int i;
    int *ptr;
    ptr = a;

    for (i = 0; i < 3; i++)
    {

        printf("%d\n", *(ptr + i));
    }

    return 0;
}
