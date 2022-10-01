#include <iostream>
#include "util/tmp/linkedlist_full.hpp"

Node* filterOdd(Node* head){
    Node* ptr = head;
    Node* ans = nullptr;
    while(ptr != nullptr){
        if(ptr->value % 2 != 0){
            if(ans == nullptr){
                ans = createNode(ptr->value);
            }else{
                addLast(ans, ptr->value);
            }
        }
        ptr = ptr->next;
    }
    return ans;
}

int main(){
    //Lista: 20 -> 34 -> 40 -> 54
    Node* head = createNode(21);
    addLast(head, 34);
    addLast(head, 43);
    addLast(head, 54);
    cout << "Lista original: ";
    printList(head);
    cout << "Lista filtrada: ";
    
    Node* filteredList = filterOdd(head);
    printList(filteredList);
}