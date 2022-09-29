#include <iostream>
#include "linkedlist.hpp"

using namespace std;

//Para poder crear un nodo
struct Node* createNode(int value){
    struct Node* head = new Node();
    head->value = value;
    head->next = nullptr;
    return head;
}

//Agrega un elemento al final
void addLast(struct Node* head, int value){
    struct Node* newNode = createNode(value);
    struct Node* ptr = head;

    if(head != nullptr){
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    head = newNode;
}

//Imprime los elementos
void printList(struct Node* head){
    struct Node* ptr = head;
    while(ptr != nullptr){
        cout << ptr->value << " -> ";
        ptr = ptr->next;
    }
    cout << "null" << endl;
}

int main(){
    struct Node* head = createNode(3);
    addLast(head, 4);
    addLast(head, 5);
    addLast(head, 12);
    printList(head);
    return 0;
}