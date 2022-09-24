#include <stdio.h>

int main(){
    const int MAX_VAL = 10;
    int numbers[MAX_VAL];
    int i;
    //Lectura de datos
    for(i = 0; i < MAX_VAL; i++){
        scanf("%d", &numbers[i]);
    }
    //Asumimos que el primer valor del array es maximo y minimo 
    //(luego es reemplazara)
    int max = numbers[0];
    int min = numbers[0];
    for(int i = 1; i < MAX_VAL; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    printf("El valor maximo es: %d\n", max);
    printf("El valor minimo es: %d", min);
    return 0;
}