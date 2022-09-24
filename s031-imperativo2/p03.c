#include <stdio.h>
/*
Implemente un programa que permita la lectura de datos de un estudiante. Los
datos del estudiante deben estar almacenados en una estructura considerando
el nombre completo, el nivel (ciclo) en el que se encuentra y el promedio
ponderado del alumno.

Los datos se leeran separados por espacios y el programa debera mostrar
la descripcion y el valor de cada uno de los datos ingresados.
*/

struct Student{
    char name[51];
    int level;
    float gpa;
};

int main(){
    struct Student s1;
    scanf("%50s %d %f", s1.name, &s1.level, &s1.gpa);
    printf("Nombre: %s\n", s1.name);
    printf("Nivel: %d\n", s1.level);
    printf("Promedio: %.2f", s1.gpa);
}