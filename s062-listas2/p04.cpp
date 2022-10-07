/*
Implemente un programa que reciba 2 arrays A y B que representan conjuntos
y retorne una lista enlazada con los elementos correspondientes a la interseccion
Ejemplo:
A = {1, 2, 3, 4}
B = {3, 4, 5, 6}
El programa retornara una lista: 3 -> 4 -> null
*/
#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

Node* intersection(int A[], int sizeA, int B[], int sizeB){
    Node* ans = nullptr;
    for(int i = 0; i < sizeA; i++){
        int value = A[i];
        bool found = false;
        for(int j = 0; j < sizeB; j++){
            if(B[j] == A[i]){
                found = true;
                addLast(ans, A[i]);
                break;
            }
        }
    }

    return ans;
}

int main(){
    int A[] = {1, 2, 3, 4};
    int B[] = {4, 5, 6, 7};
    Node* ans = intersection(A, sizeof(A)/sizeof(int), B, sizeof(B)/sizeof(int));
    printList(ans);
}