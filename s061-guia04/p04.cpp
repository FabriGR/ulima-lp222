#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

Node* copy(int values[], int size){
    Node* ans = nullptr;
    for(int i = 0; i < size; i++){
        addLast(ans, values[i]);
    }
    return ans;
}

int main(){
    int values[] = {1, 2, 3, 4};
    Node* newList = copy(values, sizeof(values) / sizeof(int));
    printList(newList);
    return 0;
}
