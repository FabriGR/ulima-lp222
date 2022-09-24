/*
Implemente un programa que, dados 2 arrays A y B, realice las siguientes
operaciones:
a) Mostrar en pantalla el 3er elemento de A y su direccion de memoria.
b) Mostrar en pantalla la direccion de memoria del elemento de indice 5 de B.
c) Definir una variable "ptr" de tipo puntero, que apunte al primer elemento 
de A.
d) Recorrer el array A, utilizando la variable ptr
*/
#include <stdio.h>

int main(){
    const int ELEMENTS = 6;
    int A[] = {1, 2, 3, 4, 6, 7};
    int B[] = {7, 8, 9, 10, 11, 12};

    printf("Tercer elemento de A: %d. Direccion: %p\n", A[2], &A[2]);
    printf("Direccion del elemento de indice 5 de B: %p\n", &A[5]);

    int* ptr = A;
    for(int i = 0; i < ELEMENTS; i++){
        printf("Valor leido: %d\n", *ptr);
        ptr++;
    }

}