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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int count = 0;
    void push(int val){
        Node* newNode = new Node(val);
        count++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop(){
        count--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
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

    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++){
    //     int val;
    //     cin >> val;
    //     mq.push(val);
    // }

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