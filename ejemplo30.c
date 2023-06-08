#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char origen[20];
    char destino[20];
    char Inter[20];
    printf("ingrea la primera palabra \n");
    scanf ("%s", origen);
    printf("ingresa la segunda palabra \n");
    scanf ("%s", destino);

    printf("antes");
    printf ("palabra 1:  %s \n", origen);
    printf ("palabra 2:  %s \n", destino);
    
    printf("despues");
    strcpy(Inter, destino);
    strcpy(destino, origen);
    strcpy(origen, Inter);
    printf ("palabra 1:  %s \n", origen);
    printf ("palabra 2:  %s \n", destino);
    system("Pause");
    return 0;




}