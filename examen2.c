#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("ingresa un numero\n");
    scanf("%d", &n);

    int* arr=malloc(sizeof(int)*15);
    for (int i = 0; i < 15; i++)
    {
        *(arr+i)=n* (i + 1);
    }

    printf("Tabla de multiplicar de %d,\n",n);
    for (int i = 0; i < 15; i++)
    {
        printf("%d x %d = %d\n", n, i+1, *(arr+i));
    }
    free(arr);
    return 0;
    
    
}