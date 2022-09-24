#include <stdio.h>

int main(){
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE];
    int i;
    //Lectura de datos
    for(i = 0; i < ARRAY_SIZE; i++){
        scanf("%d", &numbers[i]);
    }
    //Busqueda
    int target;
    int index = -1;
    scanf("%d", &target);
    for(i = 0; i < ARRAY_SIZE; i++){
        if(numbers[i] == target){
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}