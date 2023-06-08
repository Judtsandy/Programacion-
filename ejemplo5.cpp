#include <stdio.h>
#include <stdlib.h>
int main (){
    int descuento = 10;
    int descuentocliente = 20;
    int cliente =1;
    int z =0;

    z = (cliente) ? descuentocliente : descuento;
    printf("el descuento es de %d \n", z);

    printf("fin del programa \n");
    system("pause");
    return 0;

}