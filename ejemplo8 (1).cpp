#include <stdio.h>
#include <stdlib.h>
int main (){
    int contador; 
    int numero = 1;
    int cuadrado;
    int c;


    while (numero <= 500)
    {
        cuadrado = numero * numero;
        c = numero * numero * numero;
        printf(" %d, %d, %d \n", numero, cuadrado, c );
        numero ++;
    }
    
    printf("fin del programa \n");
    system("pause");
    return 0;
}