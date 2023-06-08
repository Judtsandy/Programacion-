#include <stdio.h>
#include <stdlib.h>
int main (){
    int numero = 1;


    while (numero < 1000)
    {
        if (numero / 3)
            printf("%d ", numero );
        numero ++;
        
    }
    
    printf("fin del programa \n");
    system("pause");
    return 0;
}