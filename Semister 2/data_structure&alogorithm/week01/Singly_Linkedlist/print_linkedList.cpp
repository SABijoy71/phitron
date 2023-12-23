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

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node* temp = head; // assign head/first node-> (first pointer) into another temporary pointer/node other wise if we work with head node we can't find the first position of this linked list actual value which is head

    while (temp != NULL)  // check temporary node/pointer is NUll
    {
        cout << temp->val << " ";
        temp = temp->next; // assign next node address into temp node
    }
    cout << endl;
    temp = head; // after counting first loop the temp pointer will reach at null position so if we wanna print those node value again we have to re assign everytime head node into temp node;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    } 
    cout << endl;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }   

    return 0;
}