#include <stdio.h>
#include <stdlib.h>

#define ROWS 11
#define COLS 11

void calcularM(int matriz[][COLS],int *multiplicativo){
    int i,j;

    for(i=1;i<ROWS;i++){
        for(j=1;j<COLS;j++){
            int producto=1;
            if(matriz[i][j] !=0){
                producto=matriz[i][j];
            }
            multiplicativo[i*COLS + j]=producto;
        }
    }
}
void dibuMatriz(int matriz[][COLS]){
    int i,j;

    for(i=1;i<ROWS;i++){
        for(j=1;j<COLS;j++){
            printf("%3d", matriz[i][j]);
        }
    }
}

int main(){
    int matriz[ROWS][COLS];
    int *multiplicativos;
    int i,j;

    for(i=1;i<ROWS;i++){
        for(j=1;j<COLS;j++){
            matriz[i][j]=i*j;
        }
    }
    multiplicativos=(int *)malloc(ROWS * COLS * sizeof(int));

    calcularM(matriz,multiplicativos);

    printf("Matrix original:\n");
    dibuMatriz(matriz);

    printf("\nProductos:\n");
    for(i=1;i<ROWS;i++){
        for(j=1;j<COLS;j++){
            printf("%3d", *(multiplicativos + i * COLS + j));

        }
        printf("\n");
    }

    free(multiplicativos);

    return 0;
}    