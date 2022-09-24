#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    //Leer datos
    cin >> a >> b >> c;
    //Podemos evaluar los valores de la operacion con "switch"
    switch(c){
        case 0: {
            cout << "Operacion: Ninguna. Resultado: -2";
            break;
        }
        case 1: { 
            cout << "Operacion: Suma. Resultado: %d " << a + b << endl;
            break;
        }
        case 2: {
            cout << "Operacion: Multiplicacion. Resultado: " <<  a * b << endl;
            break;
        }
        case 3: {
            cout << "Operacion: Division. Resultado: " << 1.0 * a / b << endl;
            break;
        }
        case 4: {
            cout << "Operacion: Imprimir. Resultado: " << endl;
            int i, max = a;
            if(b > max){
                max = b;
            }
            for(i = 1; i <= max; i++){
                cout << i << " ";
            }
            break;
        }
        default: {
            cout << "La operacion no es valida";
        }
    }
    return 0;
}