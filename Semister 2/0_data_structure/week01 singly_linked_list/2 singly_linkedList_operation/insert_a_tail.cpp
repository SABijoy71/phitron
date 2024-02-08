#include <bits/stdc++.h>
using namespace std;

class Node{ // Node class and data create
    public:

    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

void insert_a_tail(Node *&head, int v){ // This function create node
    Node *newNode = new Node(v); // create a new node
    if(head == NULL){ // if we create first node then it will be a head. So assign first node into the head node and then return head node for calculation
        head = newNode;
        return;
    }
    Node *tmp = head; // create a temporary node that the head node will be secured
    while (tmp->next != NULL) // access tail node
    {
        tmp = tmp->next; // update node to the next
    }
    tmp->next = newNode; // added tail into the previous last node/tail node
}

void print_node(Node *head){ // Linked list print function
    Node *tmp = head;
    cout << "Linked List: ";
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL; // create first node which is head and assign NULL to the head node

    while (true)
    {
        cout << "Option 1: Insert a Tail: "<< endl;
        cout << "Option 2: print Linked List: " << endl;
        cout << "Option 0: Terminated: " << endl;
        int op;
        cin >> op;
        if(op == 1){
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_a_tail(head,v); // pass head node and value that the next node/tail node can be create 
        }else if(op == 2){
            print_node(head); // call the print node function and pass the head node that we can access next node
        }else if(op == 0){
            break;
        }
    }

    // cout << head->val << endl;

    return 0;
}