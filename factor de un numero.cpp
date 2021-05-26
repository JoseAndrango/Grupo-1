#include <conio.h>
#include <stdio.h>

int main()
{
    int  dividendo; 
    
    printf( "\n   Introduzca un numero mayor que cero: " );
    scanf( "%d", &dividendo );
        while ( dividendo < 0 )
        {
        	printf( "\n   El NUMERO INGRESADO ES INVALIDO: " );
        	printf( "\n   Introduzca un numero: " );
    		scanf( "%d", &dividendo );
        }
	printf( "\n   LOS FACTORES DEL NUMERO INGRESADO SON \n"  );
	int n=1;
    while ( n <= dividendo){
		for (n=1; n <= dividendo;n++){
        	if (dividendo%n==0){
        		printf("EL NUMERO:  %i\n",n);
			}	
		}
	}
    getch(); /* Pausa */

    return 0;
}
