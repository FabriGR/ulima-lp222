//Estructura que representa cada nodo de la lista
struct Node{
    int value;
    Node* next;
};
//Definicion de Funciones:

//Para poder crear un nodo
Node* createNode(int value);

//Agrega un elemento al inicio
void addFirst(Node* &head, int value);

//Agrega un elemento al final
void addLast(Node* head, int value);

//Agregar un elemento como predecesor de otro enviado como referencia
void addBefore(Node* &head, int reference, int value);

//Elimina el nodo que tenga el valor dado como dato
void remove(Node* &head, int element);

//Imprime los elementos
void printList(Node* head);
