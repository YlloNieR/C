#include <stdio.h>
int main(){
    int a;
    
    for(a = 0; a <= 10; a++){        
        printf("a ist %d\n",a);
        if(a == 2){
            printf("a erreicht %d\n",a);
            continue;
        }     
        
        if(a == 5){
            printf("a erreicht %d\n",a);
            break;
        }
    }
    printf("For Schleife fertig\n");
    return 0;
}