#include <stdio.h>
#include <string.h>
/*
Utilizando la definicion de estructura del ejercicio anterior, implemente 
un programa que copie la informacion de un alumno y la muestre en pantalla.
Antes de mostrar la informacion, debera incrementar en 1 el promedio.
*/

struct Student{
    char name[51];
    int level;
    float gpa;
};

int main(){
    //Datos originales
    struct Student s1 = {"Pedro", 5, 12.3};

    //Definimos la copia
    struct Student s2;
    
    //Copia de cadenas (utilizamos strcpy - debemos incluir string.h)
    strcpy(s2.name, s1.name);
    
    //Copiamos el resto de valores
    s2.level = s1.level;
    s2.gpa = s1.gpa + 1;

    printf("Nombre: %s\n", s2.name);
    printf("Nivel: %d\n", s2.level);
    printf("Promedio: %.2f", s2.gpa);
}