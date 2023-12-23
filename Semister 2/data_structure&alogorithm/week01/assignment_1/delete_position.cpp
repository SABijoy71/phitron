#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int size_linked_list(Node* head){
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void delete_node(Node *head, int pos){
    Node * temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;
    Node* tail = head;

    int pos,val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head, tail, val);
    }
    
    print_linked_list(head);
    cin >> pos;
    if(pos < size_linked_list(head)){
        delete_node(head, pos);
    }
    print_linked_list(head);
    
    return 0;
}