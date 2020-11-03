#include <stdio.h>
#include <string.h>

int main() {
    FILE *ptr;
    char buffer[255];
    //ptr = fopen("first.txt","r");        // Lesen
    //ptr = fopen("first.txt","w+");     // Schreiben
    ptr = fopen("first.txt","a+");
    // fscanf(ptr, "%s", buffer);
    // printf("ertses mal Lesen: %s\n",buffer);    // liest jedes Wort einzeln
    // fgets(buffer, 255, ptr);                    // liest jeden String einzeln
    // printf("ertses mal Lesen: %s\n",buffer);
    
    /*
    char c;
  
    c= fgetc(ptr);
    while(c != EOF){        // wenn nicht End Of File
       printf("%c", c);
        c = fgetc(ptr);        
    }
    */
   fprintf(ptr, "2.irgendein Text\n");

    return 0;
}