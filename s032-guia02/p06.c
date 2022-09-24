#include <stdio.h>
#include <stdbool.h>
#define MAX_ORDER 10

int main(){
    int matrix[MAX_ORDER][MAX_ORDER];
    int N, i, j;
    //Leer orden de matriz: N
    scanf("%d", &N);
    //Leer datos
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    //Determinar si es simetrica
    bool isSymmetric = true;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            //Basta que haya un simetrico diferente para descartar simetria
            if(matrix[i][j] != matrix[j][i]){
                isSymmetric = false;
            }
        }
    }
    
    if(isSymmetric){
        printf("Matriz es simetrica");
    }else{
        printf("Matriz no es simetrica");
    }

    return 0;
}