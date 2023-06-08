#include <stdio.h>
#include <stdlib.h>
 int main (){
int años ;
int sueldo ;
int x;
    printf("cuantos años de antiguedad tiene\n");
    scanf("%d",&años );
    
    if (años >= 5){
        printf("cuentas con los años de antiguedad\n");
    }
    printf("ingresa tu sueldo\n");
    scanf("%d",&sueldo );
    x= sueldo*0.1;
    if (x>=1000){
        printf(" felicicdades puedes contar con un credito \n");
    }

    printf ("Fin del perograma\n");
    system ("pause");
    return 0;

 }