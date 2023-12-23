#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

int main(){

    Node* head = new Node(10); // create dynamic node object with new keyword and first node object name will be always head->name
    Node* a = new Node(50);
    Node* b = new Node(100);
    head->next = a; // assign next node address a into head pointer
    a->next = b;
    cout << head->next->next->data << endl; // access data 
    // cout << b.next << endl;
    return 0;
}