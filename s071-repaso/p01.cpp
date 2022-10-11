#include <iostream>
using namespace std;

/*
    Precondicion: Array con elementos positivos.
    Marcaremos los elementos ausentes con -1 a fin de determinar el fin del array
    Otra opcion: std::vector
*/
const int EMPTY_ELEMENT = -1;

void printArray(int* array, int maxLength, int emptyValue){
    cout << "[ ";
    for(int i = 0; i < maxLength && *array != emptyValue; i++){
        cout << *array << " " ;
        array++;
    }
    cout << "]";
}

int* difference(int A[], int nA, int B[], int nB){
    int* result = new int[nA];
    int count = 0;
    for(int i = 0; i < nA; i++){
        bool found = false;
        for(int j = 0; j < nB; j++){
            if(A[i] == B[j]){
                found = true;
                break;
            }
        }
        if(!found){
            result[count] = A[i];
            count++;
        }
    }
    for(int i = count; i < nA; i++){
        result[i] = EMPTY_ELEMENT;
    }
    return result;
}

int main(){
    int A[] = {1, 2, 3, 4};
    int B[] = {3, 4, 5, 6};
    
    int* result = difference(A, sizeof(A) / sizeof(int), B, sizeof(B) / sizeof(int));
    printArray(result, sizeof(A) / sizeof(int), EMPTY_ELEMENT);

    return 0;
}