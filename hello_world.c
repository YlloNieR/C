#include <stdio.h>

int main(void)
{
    int franzjosef = 42;
    int hans;
    hans = 23;
    int summe = franzjosef + hans;
    printf("Hello World! \t %d \n");
    printf("Summe: \t\t %d \n",summe);
    printf("franzjosef: \t %d \n", franzjosef);

    unsigned int plusplus = 2000000000;
    unsigned int minusminus = -2000000000;
    printf("plusplus \t %d \n",plusplus);
    printf("minusminus \t %d \n",minusminus);
    printf("plusplus U \t %u \n",plusplus);
    printf("minusminus U \t %u \n",minusminus);

    float FLOATZAHL = 2.3;
    float floatrechnung = FLOATZAHL - hans;
    printf("FLOATZAHL: \t %f \n",FLOATZAHL);
    printf("floatrechnung: \t %f \n",FLOATZAHL);

    char gibC = 'c';
    printf("gib mir ein C: \t %d \n\n",gibC);
    
    int buchstabeAlsZahl = floatrechnung + gibC;
    printf("buchstabenRechnung als Zahl ausgeben =      \t%d \n",buchstabeAlsZahl);
    printf("buchstabenRechnung als buchstabe ausgeben = \t%c \n",buchstabeAlsZahl);

    const float PI =3.14;
    printf("\nKonstnte Pi= \t %f \n",PI);

    int F;
    int G;
    int H;
    int I;
    
    double J;

    printf("Gib 5 ein:\n");
    scanf("%d", &F);
    printf("Gib 20 ein:\n");
    scanf("%d", &G);
    printf("Gib 8 ein:\n");
    scanf("%d", &I);
    H = G * F; 
    printf( "H = G * F \n");     
    printf( "\n"); 
    printf( "%g|F\n", F );  
    printf( "%f|F\n", F );  
    printf( "%u|F\n", F ); 
    printf( "%d|F\n", F ); 
    printf( "\n"); 
    printf( "%g|G\n", G );  
    printf( "%f|G\n", G );  
    printf( "%u|G\n", G ); 
    printf( "%d|G\n", G ); 
    printf( "\n"); 
    printf( "%g|H\n", H );  
    printf( "%f|H\n", H );  
    printf( "%u|H\n", H );  
    printf( "%d|H\n", H ); 
    printf( "\n"); 
    printf( "%g|I\n", I );  
    printf( "%f|I\n", I );  
    printf( "%u|I\n", I );  
    printf( "%d|I\n", I ); 
    printf( "\n");    
    printf( "%g|J\n", J );  
    printf( "%f|J\n", J );  
    printf( "%u|J\n", J );  
    printf( "%d|J\n", J ); 
    printf( "%.2f|J\n", J );
    printf( "\n"); 
    printf( "######################################### \n"); 

    J = (double)H / (double)I;

    printf( "J = H / I \n"); 
    printf( "%g|H\n", H );  
    printf( "%f|H\n", H );  
    printf( "%u|H\n", H );  
    printf( "%d|H\n", H ); 
    printf( "%.2f|J\n", J );
    printf( "\n"); 
    printf( "%g|I\n", I );  
    printf( "%f|I\n", I );  
    printf( "%u|I\n", I );  
    printf( "%d|I\n", I ); 
    printf( "%.2f|J\n", I );
    printf( "\n");    
    printf( "%g|J\n", J );  
    printf( "%f|J\n", J );  
    printf( "%u|J\n", J );  
    printf( "%d|J\n", J ); 
    printf( "%.2f|J\n", J );
    printf( "\n"); 

    return 0;
}