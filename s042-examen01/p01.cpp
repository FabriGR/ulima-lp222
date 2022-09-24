#include <iostream>
using namespace std;

int* readValues(int n){
    int* values = new int[n];
    int* ptr = values;
    for(int i = 0; i < n; i++){
        cin >> *ptr;
        ptr++;
    }
    return values;
}

int main(){
    const int VALUE_COUNT = 3;
    int oddCount = 0, evenCount = 0;
    int* values = readValues(VALUE_COUNT);
    int* ptr = values;
    for(int i = 0; i < VALUE_COUNT; i++){
        if(*ptr % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
        ptr++;
    }
    cout << "Cantidad de impares: " << oddCount << endl;
    cout << "Cantidad de pares: " << evenCount << endl;
    return 0;
}