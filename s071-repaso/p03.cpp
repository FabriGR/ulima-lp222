#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
    Calculo del area con las coordenadas (determinantes)
    Referencia: 
    https://www.cuemath.com/geometry/area-of-triangle-in-coordinate-geometry/
*/

double area(vector<double> x, vector<double> y){
    double result = 0;
    result += x[0] * (y[1] - y[2]);
    result += x[1] * (y[2] - y[0]);
    result += x[2] * (y[0] - y[1]);
    result = abs(result * 0.5);
    return result;
}

int main(){
    //Coordenadas: {(0, 0), (3, 0), (3, 4)}
    vector<double> x = {0, 3, 3};
    vector<double> y = {0, 0, 4};
    cout << "Area del triangulo: " << area(x, y);
    return 0;
}