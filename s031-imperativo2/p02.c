/*
Implemente un programa que, dadas 2 matrices A y B, permita
calcular la suma de ambas y almacenarla en una matriz C
*/
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(){
    int A[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[ROWS][COLS] = {
        {11, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int C[ROWS][COLS];
    

    int i, j;
    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i = 0; i < ROWS; i++){
        for(j = 0; j < COLS; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }    

    return 0;
}