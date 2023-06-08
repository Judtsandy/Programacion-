#include <stdio.h>
#include <string.h>
int main(){
    char palabra[50];
    int letras [20]={0};
    int i, lon;

    printf("introduce la palabra");
    scanf("%s", palabra);
    lon=strlen(palabra);
    for ( i = 0; i < lon; i++)
    {
        letras[palabra[i]-'a']++;

    }
    printf("ocurencias de cada letra: \n");
    for ( i = 0; i < 26; i++)
    {
        if (letras[i]>0)
        {
            printf("%c: %d \n", 'a' + i, letras[i]);
        }
        
    }
    
    
}