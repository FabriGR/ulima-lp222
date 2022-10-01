#include <iostream>
#include "util/tmp/linkedlist_full.hpp"

/*
    Implemente un programa que reciba una lista enlazada y muestre
    en pantalla los 2 ultimos dígitos de cada valor de la lista
    Ejemplo:
    Entrada: 10 -> 20 -> 25
    Salida: 1 0
            2 0
            2 5
*/
void printLastDigits(Node* head){
    Node* ptr = head;
    while(ptr != nullptr){
        int number = ptr->value;
        cout << (number / 10) % 10 << " " << number % 10 << endl;
        ptr = ptr->next;
    }
}

int main(){
    //Lista: 20 -> 34 -> 40 -> 54
    Node* head = createNode(20);
    addLast(head, 34);
    addLast(head, 40);
    addLast(head, 54);
    int lastDigit = 4;
    printLastDigits(head);

}