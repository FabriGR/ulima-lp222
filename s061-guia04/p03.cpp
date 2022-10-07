#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

bool find(Node* head, int item){
    Node* ptr = head;
    bool ans = false;
    while(ptr != nullptr){
        if(ptr->value == item){
            ans = true;
            break;
        }
        ptr = ptr->next;
    }
    return ans;
}
//Agrega los elementos de src a la lista dst (solo los que no se repiten)
void addElements(Node* src, Node* &dst){
    Node* ptr = src;
    while(ptr != nullptr){
        if(find(dst, ptr->value) == false){
            addLast(dst, ptr->value);
        }
        ptr = ptr->next;        
    }
}

Node* merge(Node* head1, Node* head2){
    Node* ans = nullptr;

    addElements(head1, ans);
    addElements(head2, ans);
    return ans;
}

int main(){
    Node* head1 = nullptr;
    addLast(head1, 21);
    addLast(head1, 34);
    addLast(head1, 43);
    addLast(head1, 54);

    Node* head2 = nullptr;
    addLast(head2, 1);
    addLast(head2, 21);
    addLast(head2, 15);
    addLast(head2, 34);

    Node* mergedList = merge(head1, head2);

    printList(mergedList);
    return 0;
}