#include <stdio.h>

int main(){
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    if(n > 0){
        printf("positivo");
    }else if(n < 0){
        printf("negativo");
    }else{
        printf("cero");
    }
    return 0;
}