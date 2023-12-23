#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    string val;
    Node* prev;
    Node* next;
    Node(string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, string address){
    Node* newNode = new Node(address);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    string address;
    while(true){
        cin >> address;
        if(address == "end"){
            break;
        }
        insert_tail(head, tail, address);
    }

    int quaries;
    cin >> quaries;
    for(int i = 1; i <= quaries; i++){
        string cmd;
        cin >> cmd;
        Node* current;
        if(cmd == "visit"){
            Node* temp = current;
            current = head;
            string s;
            cin >> s;
            
            while(current->val != s){
                if(current->next == NULL){
                    cout << "Not Available" << endl;
                    break;
                }
                current = current->next;
            }
            if(current->val != s){
                current = temp;
            }
            
            if(current->val == s){
                cout << current->val << endl;
            }
        }
        if(cmd == "prev"){
            if(current->prev == NULL){
                cout << "Not Available" << endl;
            }else{
                current = current->prev;
                cout << current->val << endl;
            }
        }
        if(cmd == "next"){
            if(current->next == NULL){
                cout << "Not Available" << endl;
            }else{
                current = current->next;
                cout << current->val << endl;
            }
        }
        
    }
    
    return 0;
}


