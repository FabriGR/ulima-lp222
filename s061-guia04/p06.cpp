#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

Node* multiply(Node* head, int factor){
    Node* ans = nullptr;
    for(int i = 0; i < factor; i++){
        Node* ptr = head;
        while(ptr != nullptr){
            addLast(ans, ptr->value);
            ptr = ptr->next;
        }
    }
    return ans;
}

int main(){
    Node* head = nullptr;
    addLast(head, 10);
    addLast(head, 20);
    addLast(head, 30);
    addLast(head, 40);

    Node* newList = multiply(head, 3);
    printList(newList);
    return 0;
}