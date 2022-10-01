#include <iostream>
#include "util/linkedlist.hpp"

int main(){
    //Lista: 20 -> 30 -> 40 -> 50
    Node* head = createNode(20);
    addLast(head, 30);
    addLast(head, 40);
    addLast(head, 50);
    //Agregar 60 al inicio
    addFirst(head, 60);
    printList(head);
    //Agregamos algunos elementos mas
    addLast(head, 80);
    addFirst(head, 100);
    addBefore(head, 20, 500);
    addBefore(head, 80, 300);
    addBefore(head, 100, 1000);

    //Eliminamos algunos elementos
    remove(head, 5); //no esta en la lista
    remove(head, 1000);
    remove(head, 40);
    remove(head, 80);
    printList(head);

}