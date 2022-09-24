#include <stdio.h>
int main(){
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int i;
    //Lectura de datos
    for(i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &numbers[i]);
    }
    //Reorganizacion de elementos
    int firstEven = 0;

    for(i = 0; i < ARRAY_SIZE; i++){
        if(numbers[i] % 2 != 0){
            int aux = numbers[firstEven];
            numbers[firstEven] = numbers[i];
            numbers[i] = aux;
            firstEven++;
        }
    }

    //Mostrar resultado
    for(i = 0; i < ARRAY_SIZE; i++){
        printf("%d ", numbers[i]);
    }
    return 0;
}