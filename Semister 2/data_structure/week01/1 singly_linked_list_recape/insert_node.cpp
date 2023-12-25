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

// void insert_node(Node* head,int val, int pos){
//     Node* newNode = new Node(val);
//     Node* temp = head;
//     for(int i = 1; i < pos; i++){
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }

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

int count_length(Node* head){
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
    cout << "Linked List: ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    Node* head = NULL;
    Node* tail = head;
    while(true){
        int x;
        cout << "Enter x: ";
        cin >> x;
        if(x == -1){
            break;
        }else{
            int val;
            cout << "Enter value: ";
            cin >> val;
            insert_tail(head,tail,val);
        }
    }
    
    print_linked_list(head);
    
    return 0;
}