#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

void printReverse(Node* head){
    if(head != nullptr){
        printReverse(head->next);
        cout << head->value << endl;
    }
}
int main(){
    Node* head1 = createNode(21);
    addLast(head1, 34);
    addLast(head1, 43);
    addLast(head1, 54);
    printList(head1);
    printReverse(head1);
    return 0;
}