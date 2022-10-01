/*
    Implementa los metodos definidos en la cabecera (.hpp)
*/
#include <iostream>
#include "linkedlist.hpp"
using namespace std;


//Para poder crear un nodo
Node* createNode(int value){
    Node* head = new Node();
    head->value = value;
    head->next = nullptr;
    return head;
}

//Agrega un elemento al inicio
void addFirst(Node* &head, int value){
    Node* newNode = createNode(value);
    if(head != nullptr){
        newNode->next = head;        
    }
    //Se modificara el nodo cabecera (sera el nuevo nodo)
    head = newNode;
}

//Agrega un elemento al final
void addLast(Node* head, int value){
    Node* newNode = createNode(value);
    Node* ptr = head;

    if(head != nullptr){
        while(ptr->next != nullptr){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    head = newNode;
}

//Agregar un elemento como predecesor de otro enviado como referencia
void addBefore(Node* &head, int reference, int value){
    /*
        Necesitamos un puntero que apunte al nodo de referencia y uno
        a su predecesor
    */
    Node* ptr = head;
    Node* prev = nullptr;
    //Primero buscamos el elemento de referencia
    while(ptr != nullptr && ptr->value != reference){
        prev = ptr;
        ptr = ptr->next;
    }
    if(ptr != nullptr){
        //Si la referencia coincide con la cabecera, agregamos al inicio
        if(ptr == head){
            addFirst(head, value);    
        }else{
            //En caso contrario creamos el nodo y actualizamos referencias
            Node* newNode = createNode(value);
            prev->next = newNode;
            newNode->next = ptr;
        }
    }
}

void remove(Node* &head, int element){
    /*
        Necesitamos un puntero que apunte al nodo de referencia y uno
        a su predecesor
    */
    Node* ptr = head;
    Node* prev = nullptr;
    //Primero buscamos el elemento a eliminar (podria ser una funcion?)
    while(ptr != nullptr && ptr->value != element){
        prev = ptr;
        ptr = ptr->next;
    }
    if(ptr != nullptr){
        //Si la referencia coincide con la cabecera, la cabecera sera modificada
        if(ptr == head){
            head = head->next;    
        }else{
            //En caso contrario actualizamos referencias
            prev->next = ptr->next;
        }
    }
}

//Imprime los elementos
void printList(Node* head){
    Node* ptr = head;
    while(ptr != nullptr){
        cout << ptr->value << " -> ";
        ptr = ptr->next;
    }
    cout << "null" << endl;
}
