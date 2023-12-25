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

void print_list(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void reverse(Node* &head, Node* temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    reverse(head, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
}

void print_recursion(Node *temp){
    if(temp == NULL){
        return;
    }
    cout << temp->val << " ";
    print_recursion(temp->next);
}

void print_reverse(Node *temp){
    if(temp == NULL){
        return;
    }
    print_reverse(temp->next);
    cout << temp->val << " ";
}

int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head, head);
    print_list(head);

    return 0;
}