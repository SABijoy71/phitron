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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    void push(int val){
        count++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop(){
        count--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
        
    }
    int front(){
        return head->val;
    }
    int size(){
        return count;
    }
    bool empty(){
        if(count == 0){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    myQueue mq;

    while(true){
        int val; 
        cin >> val;
        if(val == -1){
            break;
        }
        mq.push(val);
    }
    cout << "queue size: " << mq.size() << endl;
    while(!mq.empty()){
        cout << mq.front() << " done." << endl;
        mq.pop();
    }

    if(mq.empty()){
        cout << "-----all done today-----" << endl;
    }
    
    return 0;
}