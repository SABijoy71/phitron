#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val; // for store value
    Node* prev; // for store previous node address
    Node* next; // for store next node address
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_normal(Node* head){
    Node* temp = head;
    cout << "Next value: ";
    while (temp != NULL)  
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node* tail){
    cout << "previous value: ";
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    
    print_normal(head);
    print_reverse(tail);
    
    return 0;
}