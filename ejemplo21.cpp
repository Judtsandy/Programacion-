#include <stdio.h>
#include <stdlib.h>

int main(){
    int c;
    int i = 1;
    while (i < 1000)
    {
        c = i % 3;
        if (c==0){
            printf("%d, ", i);
        }
        i++;
    }
    return 0;
}
