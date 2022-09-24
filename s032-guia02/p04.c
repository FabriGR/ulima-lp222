#include <stdio.h>
int main(){
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int i, j;
    //Lectura de datos
    for(i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &numbers[i]);
    }
    //Ordenamiento de elementos

    for(i = 0; i < ARRAY_SIZE - 1; i++){
        for(j = 0; j < ARRAY_SIZE - i - 1; j++){
            if(numbers[j] > numbers[j+1]){
                int aux = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = aux;
            }
        }
    }
    printf("Array ordenado:\n");
    //Mostrar resultado
    for(i = 0; i < ARRAY_SIZE; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}