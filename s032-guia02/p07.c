#include <stdio.h>
#include <stdbool.h>
#define MAX_ORDER 10

int main(){
    int matrix[MAX_ORDER][MAX_ORDER];
    int rotatedMatrix[MAX_ORDER][MAX_ORDER];
    int N, i, j;
    //Leer orden de matriz: N
    scanf("%d", &N);
    //Leer datos
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    //Poblar matriz - rotacion
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            rotatedMatrix[N-j-1][i] = matrix[i][j];        
        }
    }
    //Mostrar datos
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%d ",rotatedMatrix[i][j]);        
        }
        printf("\n");
    }
    return 0;
}