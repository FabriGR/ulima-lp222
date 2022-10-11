#include <iostream>
#include "util/tmp/linkedlist_full.hpp"
using namespace std;

bool isPrime(int n){
    bool ans = false;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }
    return count == 2;
}

Node* reverse(Node* head){
    Node* ptr = head;
    Node* ans = nullptr;
    while(ptr != nullptr){
        if(isPrime(ptr->value)){
            addLast(ans, ptr->value);
        }        
        ptr = ptr->next;
    }
    return ans;
}

int main(){
    Node* head = nullptr;
    addLast(head, 10);
    addLast(head, 3);
    addLast(head, 30);
    addLast(head, 7);
    printList(reverse(head));
    return 0;
}
