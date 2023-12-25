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

void print_left_right(Node* head){
    Node* temp = head;
    cout << "L -> ";
    while (temp != NULL)  
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_right_left(Node* tail){
    Node* temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int length_Linked_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_position(Node* &head, Node* &tail, int pos, int val){ 
    Node* temp = head;
    Node* newNode = new Node(val);
    if(pos == 0){
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }
    if(pos == length_Linked_list(head)){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
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

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    
    int quaries;
    cin >> quaries;
    for(int i = 1; i <= quaries; i++){
        int pos,val;
        cin >> pos >> val;

        if(pos > length_Linked_list(head)){
            printf("Invalid\n");
        }else{
            insert_position(head,tail,pos,val);
            print_left_right(head);
            print_right_left(tail);
        }
    }

    return 0;
}