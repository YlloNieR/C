#include <stdio.h>
int main(){
    int a;
    
    for(a = 0; a <= 10; a++){
        printf("a ist %d\n",a);
    }
    printf("\n");
    printf("a ist %d\n",a);
    for(a;a > 0; a--){
        printf("a ist %d\n",a);
    }
    
    return 0;
}