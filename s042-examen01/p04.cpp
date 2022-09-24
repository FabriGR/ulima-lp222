#include <iostream>
using namespace std;
int main(){
    int A[] = {10, 2, 18, 29, 18, 1, 12, 28, 1};
    int n = 9;
    int countDiff = 0;
    int calculatedSum = A[0] + A[n-1];
    for(int i = 0; i < n / 2; i++){
        if(A[i] + A[n-1-i] != calculatedSum){
            countDiff++;
        }
    }
    if(countDiff == 0){
        cout << "Vector es Mariano";
    }else{
        cout << "Vector no es mariano. ";
        cout << countDiff << " par(es) de numeros no cumplen";
    }
}