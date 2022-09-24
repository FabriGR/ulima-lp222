/*
    a) Implemente una funcion que permita calcular la suma de los n primeros numeros naturales
    b) Implemente una funcion que reciba un array y un valor n. Su funcion debe llenar este array
        con 'n' numeros consecutivos ([1, n])
*/
#include <stdio.h>
#define ARRAY_LENGTH 10

int getSum(int n){        
    int i;
    int sum = 0;
    for(i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

void fill(int values[], int n){
    int i;
    for(i = 0; i < n; i++){
        values[i] = i + 1;
    }
}

void printIntArray(int values[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", values[i]);
    }
}

int main(){
    int n = 10;
    printf("La suma de los %d primeros naturales es %d\n", n, getSum(n));
    
    int values[ARRAY_LENGTH];
    printf("Array con los 10 primeros numeros naturales:\n");
    fill(values, ARRAY_LENGTH);
    printIntArray(values, ARRAY_LENGTH);

}