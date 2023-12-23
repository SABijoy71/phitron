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

void create_node_tail(Node *&head, int v){
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

void insert_Node_position(Node *head, int v, int pos){
    Node *newNode = new Node(v);
    Node *temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid position" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_head_position(Node *&head, int v){
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void delete_node_position(Node *head, int pos){
    Node *temp = head;
    for(int i = 1; i < pos; i++){
        temp = temp->next;
        if(temp == NULL){
            cout << "Invalid position" << endl;
            return;
        }
    }
    
    Node *deleteNode= temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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
        cout << "Option 1: Create node at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert Node at position" << endl;
        cout << "Option 4: Insert Node at head" << endl;
        cout << "Option 5: Delete node at position" << endl;
        cout << "Option 0: Terminate" << endl;
        int op;
        cout << "Enter Option: ";
        cin >> op;
        if(op == 1){
            int v;
            cout << "Enter value: ";
            cin >> v;
            create_node_tail(head,v);
        }else if(op == 2){
            print_linked_list(head);
        }else if(op == 3){
            int v,pos;
            cout << "Enter value: ";
            cin >> v;
            cout << "Enter position: ";
            cin >> pos;
            insert_Node_position(head,v,pos);
        }else if(op == 4){
            int v;
            cout << "Enter value: ";
            cin >> v;
            insert_head_position(head, v);
        }else if(op == 5){
            int pos;
            cout << "Enter position: ";
            cin >> pos;
            delete_node_position(head, pos);
        }else if(op == 0){
            break;
        }
    }
    
    
    
    return 0;
}