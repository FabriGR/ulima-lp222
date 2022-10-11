#include <iostream>
#include <vector>
using namespace std;

/*
    Este ejemplo utiliza std::vector, que es una estructura dinamica (puede
    ampliar su tamano, y me permite obtener de forma sencilla la cantidad
    de elementos (size)
*/

int countDigits(int n){
    int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    return count;
}

vector<int> getDigitVector(vector<int> values){
    vector<int> response;
    for(int i = 0; i < values.size(); i++){
        response.push_back(countDigits(values[i]));
    }
    return response;
}

void printVector(vector<int> values){
    cout << "[ ";
    for(int i = 0; i < values.size(); i++){
        cout << values[i] << " ";
    }
    cout << "]";
}

int main(){
    vector<int> numbers = {10, 200, 3000, 4, 15, 236};
    vector<int> digitVector = getDigitVector(numbers);
    printVector(digitVector);
    return 0;
}