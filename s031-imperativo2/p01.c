/*
Implemente un programa que calcule el producto escalar de 2 vectores
representados como arrays (longitud maxima = 10)
*/
#include <stdio.h>

int main(){
    const int ARR_SIZE = 3;
    int A[] = {10, 100, 1000};
    int B[] = {5, 3, 11};
    int i;
    int ans = 0;
    for(i = 0; i < ARR_SIZE; i++){
        ans += A[i] * B[i];
    }
    printf("%d\n", ans);
    return 0;
}