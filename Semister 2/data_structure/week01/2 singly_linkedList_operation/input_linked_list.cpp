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

void insert_tail(Node *&head, int v){
    Node *newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next != NULL){
        // temp->next = newNode;
        temp = temp->next;
    }
    temp->next = newNode;
}

void print_linked_list(Node *head){
    Node *temp = head;
    cout << "Linked List: ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node *head = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head, val);
    }
    print_linked_list(head);
      
    return 0;
}