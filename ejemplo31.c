#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char origen[]="brisas";
char destino[11]="para";
strcat(destino,origen);
printf("destimo: %s", destino);
system("pause");
return 0;
}