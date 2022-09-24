#include <stdio.h>
/*
    Implemente un programa que lea el valor de n (n < 10) y lea n datos enteros
    desde el teclado. Una vez finalizada la lectura, muestre cada uno de los
    datos y la suma de ellos
*/
int main(){
    const int MAX_NUMBERS = 10;
    int numbers[MAX_NUMBERS], n, i;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Ingrese un valor entero: ");
        scanf("%d", &numbers[i]);
    }
    printf("Los numeros ingresados son:\n");
    int sum = 0;
    for(i = 0; i < n; i++){
        printf("%d\n", numbers[i]);
        sum += numbers[i];
    }
    printf("La suma de valores es: %d\n", sum);
}