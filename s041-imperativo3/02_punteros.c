#include <stdio.h>
#include <stdlib.h>

/*
    a)  Implemente una funcion que reciba un valor entero "n", lea "n" valores desde el teclado y 
        los retorne en un array.
    b)  Implemente una funcion que reciba un array (como un puntero a entero), un valor "n" con la
        longitud e imprima los valores en pantalla.
*/

int* getIntValues(int n){
    int i;
    //Separamos espacio de memoria para "n" enteros
    int* values = malloc(n * sizeof(int));
    int* ptr = values;
    for(i = 0; i < n; i++){ 
        printf("Ingrese valor %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    return values;
}

void printIntArray(int* values, int n){
    int* ptr = values;
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *ptr);
        ptr++;
    }
}

int main(){
    int n = 3;
    printf("Leyendo %d valores enteros:\n", n);
    int* values = getIntValues(n);
    printf("Valores leidos:\n");
    printIntArray(values, n);
    return 0;
}