#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len;
    char origen[20];
    char destino[20];
    printf("ingresa la primera palabra\n");
    scanf ("%s", origen);
    printf("ingresa la segunda palabra \n");
    scanf ("%s", destino);
    strcat(destino,origen);
    printf("%s", destino);

    len = strlen(origen);
    for (int i = 1; i <= len; i++){
        printf("%s", origen);
    }
    system("Pause");
    return 0;
    
    

}