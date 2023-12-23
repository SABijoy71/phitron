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
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void remove_duplicate(Node* head, int val){
    Node* temp2 = head;
    while (temp2->next != NULL)
    {
        if(temp2->next->val == val){
            Node* deleteNode = temp2->next;
            temp2->next = deleteNode->next;
            delete deleteNode;
        }else{
            temp2 = temp2->next;
        }
    }
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
        insert_tail(head,tail,val);
    }

    Node* temp = head;
    while (temp != NULL)
    {
        remove_duplicate(temp, temp->val);
        temp = temp->next;
    }
    
    print_linked_list(head);

    return 0;
}

