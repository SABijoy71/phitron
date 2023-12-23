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

int length_Linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_node_postion(Node* head, int pos){
    Node* temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void delete_head(Node* &head){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    head->prev = NULL;
}

void delete_tail(Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;

}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int pos,val;
    cin >> pos;

    // delete_tail(tail);
    // delete_head(head);

    if(pos >= length_Linked_list(head)){
        cout << "Invalid" << endl;
    }else if(pos == 0){
        delete_head(head);
    }else if(pos < length_Linked_list(head)){
        delete_tail(tail);
    }else{
        delete_node_postion(head, pos);
    }
    
    
    print_normal(head);
    print_reverse(tail);

    return 0;
}