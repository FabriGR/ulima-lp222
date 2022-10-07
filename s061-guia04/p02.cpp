#include <iostream>
#include <cmath>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

Node* power(Node* head, int exponent){
    Node* ptr = head;
    Node* ans = nullptr;
    while(ptr != nullptr){
        int newValue = pow(ptr->value, exponent);
        addLast(ans, newValue);
        ptr = ptr->next;
    }
    return ans;
}

int main(){
    //Lista: 20 -> 34 -> 40 -> 54
    Node* head = nullptr;
    addLast(head, 21);
    addLast(head, 34);
    addLast(head, 43);
    addLast(head, 54);
    cout << "Lista original: ";
    printList(head);
    cout << "Lista elevada al cuadrado: ";
    
    Node* filteredList = power(head, 2);
    printList(filteredList);
    return 0;
}