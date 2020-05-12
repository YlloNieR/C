#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a+b;
    int d = 1;

    printf("\na ist %d",a);
    printf("\nb ist %d",b);
    printf("\nbeide summiert sind %d\n", a+b);

    printf("\n1 modulo 2 = 1/1 Rest = %d\n", 1%1);
    printf("\n1 modulo 2 = 200/3 = %d\n", 200/3);
    printf("\n1 modulo 2 = 3*66 = %d\n", 3*66);
    printf("\n2 modulo 3 = 200/3 Rest = %d\n", 200%3);
    printf("\n3 modulo 23 = 30/23 Rest = %d\n", 30%23);
    printf("\n4 modulo 12 = 42/12 Rest = %d\n", 42%12);
    printf("\n12 modulo 4 = 12/4 Rest = %d\n", 12%4);

    printf("\nd = %d\n", d++);
    printf("\nd++ = %d\n", d);
    printf("\nd = %d\n", d++);
    printf("\nd++  = %d\n", d--);
    printf("\nd-- = %d\n", d);

    if (b > 0)
    {
        printf("\n1. b > 0\n");
    }
    else if (b > 1)
    {
        printf("\n2. b > 1\n");
        printf("3. & b ist 1\n");
    }
    else if (b < 8)
    {
        printf("\n4. b < 8\n");        
    }
    else if (c > 1)
    {
        printf("\n5. c > 1\n");
    }
    else if (b == 3)
    {
        printf("\n6. b = 3\n");
    }
    else
    {
        printf("\n7. b ist was anderes\n");
    }
    if (b != 0)
    {
        printf("\n8. b ungleich 0\n");
    }
    if (b >= 0)
    {
        printf("\n9. b groessergleich 0\n");
    }

    /*Logische Operatoren*/
    if (b >= 0 && a != 5) {
        printf("b > 0 && UND a ist != UNGLEICH 5\n");
    }
    if (b >= 0 || a != 4) {
        printf("b > 0 || ODER a ist != UNGLEICH 4\n");
    }
    if (((b >= 0 || a != 4) && (b > 0 && a < 5)) || d == 3) {
        printf("(((b >= 0 || a != 4) && (b > 0 && a < 5)) || d == 3)\n");
    }

    /*! = Verneinung*/

    return 0;
}