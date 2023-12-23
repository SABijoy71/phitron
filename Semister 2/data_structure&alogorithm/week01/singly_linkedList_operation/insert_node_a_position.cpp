#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_a_tail(Node *&head, int v){ 
    Node *newNode = new Node(v); 
    if(head == NULL){ 
        head = newNode;
        return;
    }
    Node *tmp = head; 
    while (tmp->next != NULL) 
    {
        tmp = tmp->next; 
    }
    tmp->next = newNode; 
}

void print_node(Node *head){ 
    Node *tmp = head;
    cout << "Linked List: ";
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_position(Node *head, int v, int pos){
    Node *newNode = new Node(v);
    Node *temp = head;
    for(int i = 1; i <= pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){

    Node* head = NULL; 

    while (true)
    {
        cout << "Option 1: Insert a Tail: "<< endl;
        cout << "Option 2: print Linked List: " << endl;
        cout << "Option 3: Insert any position: " << endl;
        cout << "Option 0: Terminated: " << endl;
        int op;
        cin >> op;
        if(op == 1){
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_a_tail(head,v); 
        }else if(op == 2){
            print_node(head); 
        }
        else if(op == 3){
            int pos,v;
            cout << "Enter value: ";
            cin >> v;
            cout << "Enter position: ";
            cin >> pos;
            insert_at_position(head,v,pos);
        }
        else if(op == 0){
            break;
        }
    }

    return 0;
}