#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

void insertSorted(Node* &headSortedList, int n){
    Node* ptr = headSortedList;    
    Node* prev = ptr;
    while(ptr != nullptr && n > ptr->value){
        prev = ptr;
        ptr = ptr->next;
    }
    //Si el elemento debe ir en la primera posicion
    if(ptr == prev){
        addFirst(headSortedList, n);
    }else{
        Node* newNode = createNode(n);
        prev->next = newNode;
        newNode->next= ptr;
    }
}

int main(){
    Node* headSortedList = nullptr;
    int value = 25;
    addLast(headSortedList, 10);
    addLast(headSortedList, 20);
    addLast(headSortedList, 30);
    addLast(headSortedList, 40);
    insertSorted(headSortedList, value);
    printList(headSortedList);
    return 0;
}
