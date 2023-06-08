#include <stdio.h>
#include <arpa/inet.h>
int main(void){
    int i,n,x;
    char *buffer;

    printf("Teclea la longitud de la cadena\n");
    scanf("%d", &i);

    buffer = (char*) malloc((i+1)*sizeof(char));
    if(buffer==NULL)exit(1);

    for ( n=0; n<i; n++){
        printf("ingresa una letra \n");
        scanf("%s", &buffer[n]);
        
    }
    printf("las letras son: %s", buffer);
        free(buffer);
        system("Pause");
    
    
}