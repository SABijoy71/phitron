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

void print_normal(Node* head){ // complexity O(N)
    Node* temp = head;
    cout << "Next value    : ";
    while (temp != NULL)  
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_reverse(Node* tail){ // complexity O(N)
    cout << "previous value: ";
    Node* temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int length_Linked_list(Node* head){ // complexity O(N)
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_position(Node* &head, int pos, int val){ // complexity O(N)
    Node* temp = head;
    Node* newNode = new Node(val);

    if(pos == 0){ // this one is for insert head
        if(head == NULL){
            head = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}

// void insert_head(Node* &head, int val){ // complexity O(1)
//     Node* newNode = new Node(val);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode; // head is the first node that's why tail will be head
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }

void insert_tail(Node* &head, Node* &tail, int val){ // complexity O(1)
    Node* newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
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
    cin >> pos >> val;
    // if(pos == 0){
    //     // insert_head(head, val);
    // }
    // else 
    if(pos > length_Linked_list(head)){
        printf("Invalid\n");
    }else if(pos == length_Linked_list(head)){
        insert_tail(head, tail, val);
    }else{
        insert_position(head,pos,val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}