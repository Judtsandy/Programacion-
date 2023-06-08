#include <stdio.h>
#include <stdlib.h>
int main (){
    int i, n;
    int suma =0;
    printf("ingresa un numero \n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++){
        suma = suma + i;
    }
    printf("%d ", suma);
    return 0;    
}