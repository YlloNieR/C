#include <stdio.h>

int x = 5; //global


void printArray(int b[], int size)
{   
    int i;
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", b[i]);
    }
    printf("]\n");
}


int main()
{
    int a[10];
    int b[10];

    a[0] = 1;
    int i;
    for (i = 0; i < 10; i++)
    {
        a[i] = 1 + i;
        if (i == 5)
        {
            a[i] = 1337;
        }

        printf("a = %d\n", a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        b[i] = 42;
        if (i == 5)
        {
            b[i] = 1337;
        }        
    }
    printArray(b, 10);

    return 0;
}

