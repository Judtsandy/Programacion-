#include <stdio.h>
#include <stdlib.h>
int main(){
    int len;
    char cad[10];
    printf("Ingresa una palabra \n")
    scanf("%s",cad);
    len = strlen(cad);
    for (int i = 0; i <= len; i++)
{
    for (int b = 0; b <= len; b++)
    {
        printf("*\t*");
    }
printf("\n");
    
}

system("pause");
return 0;

printf("\n");
return 0;
}