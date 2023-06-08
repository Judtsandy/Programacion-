#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, d;
    int i = 1;
    while (i < 1000){
        c = i % 2;
        d = i % 7;
        if (c==0 && d==0){
            printf("%d, ", i);
        }
        i++;
    }
    return 0;
}