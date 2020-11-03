#include <stdio.h>
int main(){
    int a = 4;
    int b = -3;

    while(a < 10){
        //a++;
        a = a + 1; 
        printf("a < 10\n");
        printf("a ist %d\n",a);
    }
    // a = 10
    printf("\n");
    while(a > 0){
        //a++;
        a = a - 1;  
        printf("a > 0\n");
        printf("a ist %d\n",a);
    }
    // a = 0
    printf("\n");
        //2 Bedingungen
        a = 2;
    while (a == 2 && b == -3) {
        a--;
        printf("a < 10 && b == -3\n");
        printf("a ist %d\n",a);
        printf("b ist %d\n",b);
    }
    // a = 1
    printf("\n");
        //Oder Bedingung
    while (a < 10 || b == -2) {
        a++;
        b++;
        printf("a < 10 || b == -3\n");
        printf("a ist %d\n",a);
        printf("b ist %d\n",b);
    }    
    // a = 10
    // b = 6
    printf("\n");
    while (a < 12) {        
        while(b > 5 && b < 8){
            printf("while(b > 5 && b < 8)\n");
            printf("b ist %d\n",b);        
            b++;
            }  
        a++;         
        printf("while (a < 6)\n");
        printf("a ist %d\n",a);

    }

    return 0;
}