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

int main(){

    Node* head = NULL;
    Node* tail = head;
    int val;
    int count = 1;
    while (true)
    {   
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head,tail,val);
    }

    int max = INT_MIN; // max value generate
    Node *temp = head;
    while (temp != NULL)
    {
        if(temp->val > max){
            max = temp->val;
        }
        temp = temp->next;
    }

    int min = INT_MAX; // min value generate
    temp = head;
    while (temp != NULL)
    {
        if(temp->val < min){
            min = temp->val;
        }
        temp = temp->next;
    }
    
    cout << max-min << endl;
    
    return 0;
}
