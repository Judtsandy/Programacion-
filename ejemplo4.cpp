#include <stdio.h>
#include <stdlib.h>
 int main (){
    float sueldo;
    float hst;
    float ph; 
    float x,y;
    printf("ingrese el numero de horas trabajadas \n");
    scanf("%f", &hst);
    
    printf("ingrese el precio por hora \n");
    scanf("%f", &ph);

    if(hst <= 40 ){
    printf("tu salario semanal es de ");
    x = (hst*40);
    }else{
    x = (40*ph+(ph*1.5*(hst-40)));
    printf("tu salario semanal es de %f", x);
    }
    printf("Fin del programa \n");
    system ("pause");
    return 0;

 }