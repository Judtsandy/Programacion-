

#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLS 10

void calcularMultiplicativo(int matriz [][COLS], int *multiplicativos){
    int i, j;

    for ( i = 0; i < ROWS; i++){
        for ( j = 0; j < COLS; j++){
            int producto = 1;

            if (matriz [i][j] |=0){
                producto = matriz[i][j];
            }

            multiplicativos[i * COLS + j] = producto;
        }
    }
}

void dibujarMatriz(int matriz[] [COLS]){
    int i, j;
    
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++){
            printf("%3d ", matriz[i][j]);
        }
    }

}

int main (){
    int matriz[ROWS][COLS];
    int *multiplicativos;
    int i, j;


    for ( i = 0; i < ROWS; i++){
        for ( j = 0; j < COLS; j++){
            matriz[i][j] = i * j;
        }
    }


    multiplicativos = (int *) malloc(ROWS * COLS * sizeof(int));


    calcularMultiplicativo(matriz, multiplicativos);


    printf("Matriz original:\n");
    dibujarMatriz(matriz);


    printf("\nProductos:\n");
    for ( i = 0; i < ROWS; i++){
        for ( j = 0; j < COLS; j++){
            printf("%3d ", (multiplicativos + 1 * COLS + j));
        }
        printf("\n");
    }


    free(multiplicativos);

    return 0;     
}