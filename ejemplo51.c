#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("ingresa un numero\n");
    scanf("%d", &n);

    int* arreglo=malloc(sizeof(int)*10);
    for (int i = 0; i < 10; i++){
        *(arreglo+i)= n* (i + 1);
    }

    printf("Tabla de multiplicar de %d\n",n);
    for (int i = 0; i < 10; i++){
        printf("%d x %d = %d\n", n, i+1, *(arreglo+i));
    }
    free(arreglo);
    return 0;
    
    
}