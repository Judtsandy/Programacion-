#include <stdio.h>
 int main(){
    int n;
    printf ("ingresa el tamaño del areglo: ");
    scanf("%d", &n);

    char arr[n];
    printf("Ingresa los %d elementos: \n", n);
    for ( int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }
    
    printf ("los elementos en orden inverso son: \n");
    for (int i = n - 1; i >= 0; i--){
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
 }