#include <stdio.h>
#include <stdlib.h>
int main (){
    int n, i, suma=0;
    printf("ingrese un numero\n");
    scanf("%d",&n);
    
    for (i = 1; i<=n; i++){

       //suma += i;
       suma = suma + i;

       printf("Lasuma de los numeros es "+ suma);
    }
    

}