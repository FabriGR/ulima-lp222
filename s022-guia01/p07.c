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
    bool sortedAsc = true;
    bool sortedDesc = true;
    for(i = 0; i < ARRAY_SIZE - 1; i++){
        if(numbers[i] >= numbers[i + 1]){
            sortedAsc = false;    
        }
        if(numbers[i] <= numbers[i + 1]){
            sortedDesc = false;
        }
    }
    if(sortedAsc){
        printf("Ordenado - Menor a mayor");
    }else if(sortedDesc){
        printf("Ordenado - Mayor a menor");
    }else{
        printf("No ordenado");
    }
    return 0;
}