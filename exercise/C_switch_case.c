#include <stdio.h>
int main(){
    int a = 4;
    int b = -3;

    char note = 'B';
    switch (note)
    {
    case 'A':        
        printf("Super!");
        break;
    case 'B': 
        printf("Gut");       
        break;
    case 'C':   
        printf("Befriedigend");       
        break;
    case 'D':
        printf("Unbefriedigend");       
        break;
    case 'E':  
        printf("Mangelhaft");       
        break;
    case 'F':  
        printf("Keine Leistung gezeigt");       
        break;       
    default:
        printf("Das ist keine Note");
    }
    return 0;
}