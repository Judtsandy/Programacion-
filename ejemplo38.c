#include <stdio.h>
#include <string.h>
#include <string.h>

float maximo(float n1, float n2);
int main(){
    float n1=15,n2=35,max;
    system("pause");
    return 0;

}
float maximo(float n1, float n2){
    float max;
    n1=n1+10;
    n2=n2+10;
    if (n1>n2)
    {
        printf("el mumero mayor es: %2.1f\n", n1);
    }else{
        if (n2>n1)
        {
            printf("el numero mayor es: %2.1f\n", n2);
        }
        
    }
    return max;

    
}