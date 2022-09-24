#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX_DIGITS 5
int main(){
    int digits[MAX_DIGITS];
    int n;
    scanf("%d", &n);
    //Obtener cantidad de digitos (otra opcion: bucle)
    int numberOfDigits = (int)log10(n) + 1;
    
    //Llenamos el array de derecha a izquierda
    int i;
    for(i = numberOfDigits - 1; i >= 0; i--){
        //Obtenemos el digito de la derecha
        int rightDigit = n % 10;
        digits[i] = rightDigit;
        //Quitamos el digito de la derecha
        n = n / 10;
    }
    //Mostramos los digitos leidos
    printf("Digitos leidos: \n");
    for(i = 0; i < numberOfDigits; i++){
        printf("%d ", digits[i]);
    }

    //Con la informacion en un array, podemos saber si es capicua
    bool isPalindromic = true;
    for(i = 0; i < numberOfDigits / 2; i++){
        if(digits[i] != digits[numberOfDigits-i-1]){
            isPalindromic = false;
        }
    }

    if(isPalindromic){
        printf("\nEl numero es capicua");
    }else{
        printf("\nEl numero no es capicua");
    }
    return 0;
}