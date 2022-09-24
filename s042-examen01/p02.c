#include <stdio.h>
int main(){
    int a, b, c;
    
    //Leer datos
    scanf("%d %d %d", &a, &b, &c);
    //Podemos evaluar los valores de la operacion con "switch"
    switch(c){
        //Opcionalmente pueden colocarse llaves en cada caso
        case 0: 
            printf("Operacion: Ninguna. Resultado: -2");
            break;
        case 1: 
            printf("Operacion: Suma. Resultado: %d\n", a + b);
            break;
        case 2:
            printf("Operacion: Multiplicacion. Resultado: %d", a * b);
            break;
        case 3:
            printf("Operacion: Division. Resultado: %.2f", 1.0 * a / b);
            break;
        case 4:
            printf("Operacion: Imprimir. Resultado: \n");
            int i, max = a;
            if(b > max){
                max = b;
            }
            for(i = 1; i <= max; i++){
                printf("%d ", i);
            }
            break;
        default:
            printf("La operacion no es valida");
    }
    return 0;
}