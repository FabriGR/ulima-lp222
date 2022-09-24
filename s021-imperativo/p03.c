/*
Implemente un programa que lea un valor n desde el teclado y
obtenga el resultado de la expresion:
S = 1 + 2 + 3 + 4 + ... + 2n, y lo imprima en pantalla
*/
#include <stdio.h>

int main(){
    int result = 0;
    int n = 0;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    int i;
    for(i = 1; i <= 2 * n; i++){
        result = result + i;        
    }
    printf("El resultado es: %d", result);
    return 0;
}