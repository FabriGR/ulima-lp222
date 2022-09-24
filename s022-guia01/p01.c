#include <stdio.h>

int main(){
    char name[31];
    int age;
    printf("Ingrese nombre: ");
    scanf("%30s", name);

    printf("Ingrese edad: ");
    scanf("%d", &age);

    printf("Edad %d, Nombre: %s", age, name);
    return 0;
}