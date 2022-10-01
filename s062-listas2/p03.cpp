#include <iostream>
#include "util/tmp/linkedlist_full.hpp"

/*
    Implemente un programa que reciba una lista enlazada y devuelva
    una nueva lista con los mismos elementos que la original pero
    en orden inverso
*/
Node* reverse(Node* head){
    Node* ptr = head;
    Node* ans = nullptr;
    while(ptr != nullptr){
        if(ans == nullptr){
            ans = createNode(ptr->value);
        }else{
            addFirst(ans, ptr->value);
        }
        ptr = ptr->next;
    }
    return ans;
}

int main(){
    //Lista: 20 -> 34 -> 40 -> 54
    Node* head = createNode(20);
    addLast(head, 34);
    addLast(head, 40);
    addLast(head, 54);
    cout << "Lista original: ";
    printList(head);

    cout << "Lista invertida: ";
    Node* newList = reverse(head);
    printList(newList);

}