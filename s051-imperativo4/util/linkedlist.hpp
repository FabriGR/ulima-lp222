//Estructura - nodo
struct Node{
    int value;
    struct Node* next;
};

//Para poder crear un nodo
struct Node* createNode(int value);

//Agrega un elemento al final
void addLast(struct Node* head, int value);

//Imprime los elementos
void printList(struct Node* head);
