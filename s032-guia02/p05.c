#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10

int main(){
    int matrix[MAX_ROWS][MAX_COLS];
    int M, N, i, j;
    //Leer dimensiones de la matriz: M y N
    scanf("%d %d", &M, &N);
    //Leer datos
    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    //Calcular promedio por columna
    for(j = 0; j < N; j++){
        int colSum = 0;
        for(i = 0; i < M; i++){
            colSum += matrix[i][j];
        }
        printf("%.2f ", 1.0 * colSum / M);
    }

    return 0;
}