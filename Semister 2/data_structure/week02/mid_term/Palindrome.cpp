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

void insert_node(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void check_palindrome(Node* head, Node* tail){
    Node* i = head;
    Node* j = tail;
    bool palindrome = false;
    while(i != j && i->next != j){
        if(i->val == j->val){
            palindrome = true;
        }else{
            palindrome = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val == j->val){
        palindrome = true;
    }else{
        palindrome = false;
    }
    if(palindrome == false){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_node(head,tail,val);
    }

    check_palindrome(head, tail);
    
    return 0;
}