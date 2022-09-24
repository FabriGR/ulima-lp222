/*
Implemente un programa que lea una nota (valor entero) desde el teclado.
El programa debe mostrar un mensaje indicando si el alumno se encuentra
aprobado o desaprobado
*/
#include <stdio.h>

int main(){
    int grade = 0;
    printf("Ingrese la nota: ");
    scanf("%d", &grade);

    if(grade >= 11){
        printf("Alumno aprobado");
    }else{
        printf("Alumno desaprobado");
    }
    return 0;
}