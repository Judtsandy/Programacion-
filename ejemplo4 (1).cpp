#include <stdio.h>
#include <stdlib.h>
 int main (){
    float sueldo;
    float hst;
    float ph; 
    printf("ingrese el numero de horas trabajadas");
    scanf("%f", &hst);
    
    printf("ingrese el precio por hora");
    scanf("%f", &ph);

    if(hst <= 40 ){
    printf("tu salario semanal es de ");
    x = (hst*40);
    }else{
    x = (40*ph+(ph*1.5*(hst-40)));
    printf("tu salario semanal es de ");
    }
    printf("Fin del programa \n");
    system ("pause");
    return 0;

 }