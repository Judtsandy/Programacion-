#include <stdio.h>
#include <stdlib.h>
int main (){
  
int i, j; 
for (i=0; i<11; i++){

printf("%d \t", i);
    for(j=0; j<11; j++){
        printf("%d", i*j);

    }
    printf("\n");
}


return 0;
}