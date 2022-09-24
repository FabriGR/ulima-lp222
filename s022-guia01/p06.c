#include <stdio.h>
#include <stdbool.h>

int main(){
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int i;
    //Lectura de datos
    for(i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &numbers[i]);
    }
    //Determinar orden ascendente
    bool sorted = true;
    for(i = 0; i < ARRAY_SIZE - 1; i++){
        if(numbers[i] >= numbers[i + 1]){
            sorted = false;    
        }
    }
    if(sorted){
        printf("Ordenado");
    }else{
        printf("Desordenado");
    }
    return 0;
}