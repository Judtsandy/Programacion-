#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
 printf("ingresa un numero entero: ");  
 scanf("%d", &n);
int i; 
for (i = 1; i<=n; i++){
    int j;
    for(j=0; j<i; j++){
        printf("*");

    }
    printf("\n");
}
for (i = 0; i<=n; i++){
    int j;
    for(j=1; j<n-i; j++){
        printf("*");

    }
    printf("\n");
}

return 0;
}