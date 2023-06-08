#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    int res;
    char palabra1[20];
    char palabra2[20];
    printf("Ingresa la primer palabra \n");
    scanf("%s", palabra1);
    printf("Ingresa la segunda palabra \n");
    scanf("%s", palabra2);
    res = strcmp( palabra1, palabra2);
    if (palabra1==palabra2){
        printf("son iguales");
    }
    if (palabra1<palabra2){
        printf("la palabra 2 es mayor");
    }
    if (palabra1>palabra2){
        printf("la palabra 1 es mayor");
    }
    system("Pause");
    return 0;
    
    
}