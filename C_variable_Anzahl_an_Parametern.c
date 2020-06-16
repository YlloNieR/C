#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int sum(int num,...)
{
    va_list valist;
    int summe = 0;
    int i;
    va_start(valist, num);
    for(i = 0; i<num; i++)
    {
        summe += va_arg(valist, int);        
    }
    va_end(valist);
    return summe;    
}

int main(){
    printf("Summe: %d\n", sum(5,1,2,3,4 ,5));
    return 0;
}