#include <stdio.h>

int main(){
    int A[] = {10, 2, 18, 29, 18, 1, 12, 28, 20};
    int n = 9;
    int countDiff = 0;
    int i;
    int calculatedSum = A[0] + A[n-1];
    for(i = 0; i < n / 2; i++){
        if(A[i] + A[n-1-i] != calculatedSum){
            countDiff++;
        }
    }
    if(countDiff == 0){
        printf("Vector es Mariano");
    }else{
        printf("Vector no es marino. %d par(es) de numeros no cumplen", countDiff);
    }
}