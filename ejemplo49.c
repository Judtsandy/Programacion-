#include <stdio.h>
#include <arpa/inet.h>
int main(void){
    int i,n;
    int *buffer, *p_buffer;

    printf ("teclea la longitud del arreglo");
    scanf ("%d", &n);

    buffer = (int*) malloc((n)* sizeof(int));
    if (buffer==NULL) exit (1);

    p_buffer = buffer;
    for ( i = 0; i < n; i++)
    {
        printf("ingresa el valor %d \n", i);
        scanf("%d", p_buffer++);
    }

    p_buffer = buffer;
    printf("\nLos valores son:\n");
    for ( n = 0; n < i; n++)
    {
        printf("areglo[%d] = %d \n", n, *p_buffer++);
    }

    free (buffer);
    system("Pause");
    
    
}