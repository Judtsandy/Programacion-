#include <stdio.h>
#include <string.h>
int main (){
    char palabra [50];
    int i,lon,polindromo=0;
    printf("ingresa la primera palabra:  \n");
    scanf("%s", &palabra);
    lon=strlen(palabra);
    for ( i = 0; i < lon; i++)
    {
        if (palabra [i]!=palabra[lon-i-1])
        {
            polindromo=1;
            break;
        }
        
    }
    if (polindromo==1)
    {
        printf("%s no es una palabra polindroma", palabra);
    }else{
        printf("%s es una palabra polindroma", palabra);
    }
    
    
}