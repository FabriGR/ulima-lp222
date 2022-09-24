/*
Implemente un programa que lea 3 notas desde el teclado, muestre
en pantalla las notas ingresadas y el promedio de ellas. 
Las notas deberan ser ingresadas separadas por un espacio en blancos
*/
#include <stdio.h>

int main(){
    int grade1, grade2, grade3;
    printf("Ingrese notas: ");
    //Lectura de datos separados por espacio
    scanf("%d %d %d", &grade1, &grade2, &grade3);
    printf("Las notas son: %d, %d, %d\n", grade1, grade2, grade3);
    float average = 1.0 * (grade1 + grade2 + grade3) / 3;
    //Permite mostrar solamente 2 posiciones decimales - redondea
    printf("El promedio es %.2f\n", average);
    return 0;
}