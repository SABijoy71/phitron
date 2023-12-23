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

void insert_head(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;

}

void insert_a_tail(Node *&head,Node* &tail, int v){ 
    Node *newNode = new Node(v); 
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode; 
}
void delete_node(Node *&head, int pos){
    if(pos == 0){
        Node* delete_head = head;
        head = head->next;
        delete delete_head;
    }else{
        Node * temp = head;
        for(int i = 1; i < pos; i++){
            temp = temp->next;
        }
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
    }
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
    int quary;
    cin >> quary;
    for(int i = 1; i <= quary; i++){
        int x,v;
        cin >> x >> v;
        if(x == 0){
            insert_head(head,tail, v);
        }else if(x == 1){
            insert_a_tail(head, tail, v);
        }else if(x == 2){
            if(v < size_linked_list(head)){
                delete_node(head, v);
            }
        }
        print_linked_list(head);
    }
 
    return 0;
}