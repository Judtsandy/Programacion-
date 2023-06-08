#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int len;
    char cad[10];
    printf("Ingresa una palabra \n");
    scanf("%s",cad);
    len = strlen(cad);
    for (int i = 1; i < len; i++){
    for (int b = 1; b < len; b++){
        printf("*\t");
    }
printf("\n");
    
}

system("pause");
return 0;

printf("\n");
return 0;
}