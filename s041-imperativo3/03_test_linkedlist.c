#include <stdio.h>
#include <stdlib.h>

//Definimos la estructura para lista enlazada
struct Node{
    int value;
    struct Node* next;
};

//Para poder crear un nodo
struct Node* createNode(int value){
    struct Node* head = malloc(sizeof(struct Node));
    head->value = value;
    head->next = NULL;
    return head;
}

//Agrega un elemento al final
void addLast(struct Node* head, int value){
    struct Node* newNode = createNode(value);
    struct Node* ptr = head;

    if(head != NULL){
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    head = newNode;
}

//Imprime los elementos
void printList(struct Node* head){
    struct Node* ptr = head;
    while(ptr != NULL){
        printf("%d -> ", ptr->value);
        ptr = ptr->next;
    }
    printf("null\n");
}

int main(){
    struct Node* head = createNode(3);
    addLast(head, 4);
    addLast(head, 5);
    addLast(head, 12);
    printList(head);
    return 0;
}