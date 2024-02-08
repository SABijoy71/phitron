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

void deleteDuplicate(Node *head){
    Node* copy_head = head;
    for (Node *i = copy_head; i != NULL; i = i->next){
        Node *temp = i;
        for (Node *j = i->next; j != NULL; j = j->next){
            if (i->val == j->val){
                Node* del = temp->next;
                temp->next = j->next;
                delete del;
            }else{
                temp = temp->next;
            }
        } 
    }
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

    deleteDuplicate(head);
    print_linked_list(head);

    return 0;
}

