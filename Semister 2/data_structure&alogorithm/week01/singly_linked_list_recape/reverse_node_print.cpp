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

void print_linked_list(Node *head){
    Node* temp = head;
    // cout << "Linked List: ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_print(Node *temp){
    if(temp == NULL){
        return;
    }
    reverse_print(temp->next);
    cout << temp->val << " ";
}

int main(){

    Node* head = NULL;
    Node* tail = head;
    int val;
    cout << "Enter value: ";
    while (true)
    {   
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head,tail,val);
    }
    
    cout << "before reverse " << endl;
    print_linked_list(head);
    cout << "after reverse " << endl;
    reverse_print(head);

    return 0;
}