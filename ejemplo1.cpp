#include <stdio.h>
#include <stdlib.h>
 int main (){
    int cal;
    printf("inserte la calificasion del examen \n");
    scanf("%d",&cal);
    if (cal>= 8){
        printf("felicidades aprobaste el curso\n");
    }

    printf ("Fin del perograma\n");
    system ("pause");
    return 0;
 }