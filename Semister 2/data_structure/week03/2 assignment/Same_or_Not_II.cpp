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

class myStack{
    public:

    Node* head = NULL;
    Node* tail = NULL;
    void push(int val){
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
        Node* deleteNode = tail;
        tail = tail->prev;
        if(tail == NULL){
            head = NULL;
        }
        delete deleteNode;
    }
    int top(){
        return tail->val;
    }

};

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    void push(int val){
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
};

int main(){

    myStack mt;
    myQueue mq;

    int mt_len,mq_len;
    cin >> mt_len >> mq_len;

    for(int i = 1; i <= mt_len; i++){
        int val;
        cin >> val;
        mt.push(val);
    }
    for(int i = 1; i <= mq_len; i++){
        int val;
        cin >> val;
        mq.push(val);
    }

    bool flag= true;

    if(mt_len == mq_len){
        for(int i = 1; i <= mt_len; i++){
            if( mt.top() != mq.front()){
                flag = false;
                break;
            }
            mt.pop();
            mq.pop();
        }
    }else{
        flag = false;
    }

    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}