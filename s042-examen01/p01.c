#include <stdio.h>
int main(){
    int a, b, c;
    int oddCount = 0, evenCount = 0;
    
    //Leer datos
    scanf("%d %d %d", &a, &b, &c);
    
    //Evaluar valores a, b y c. Actualizar contadores
    if(a % 2 != 0){
        oddCount++;
    }else{
        evenCount++;
    }

    if(b % 2 != 0){
        oddCount++;
    }else{
        evenCount++;
    }

    if(c % 2 != 0){
        oddCount++;
    }else{
        evenCount++;
    }

    //Presentamos resultados
    printf("Cantidad de pares: %d\n", evenCount);
    printf("Cantidad de impares: %d\n", oddCount);

    return 0;
}