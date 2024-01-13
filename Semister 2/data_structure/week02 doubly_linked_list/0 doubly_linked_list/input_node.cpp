#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val; 
    Node* prev; 
    Node* next; 
    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_normal(Node* head){
    Node* temp = head;
    cout << "Next value    : ";
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

void insert_node(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_node(head, tail, val);
    }
    
    
    print_normal(head);
    print_reverse(tail);

    return 0;
}