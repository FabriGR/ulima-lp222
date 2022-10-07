#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

void printFiltered(Node* head, int lastDigit){
    Node* ptr = head;
    while(ptr != nullptr){
        if(ptr->value % 10 == lastDigit){
            cout << ptr->value << "  ";
        }
        ptr = ptr->next;
    }    
}

int main(){
    //Lista: 20 -> 34 -> 40 -> 54
    Node* head = nullptr;
    addLast(head, 20);
    addLast(head, 34);
    addLast(head, 40);
    addLast(head, 54);
    int lastDigit = 4;
    cout << "Elementos que terminan en " << lastDigit << ": ";
    printFiltered(head, lastDigit);
    return 0;
}