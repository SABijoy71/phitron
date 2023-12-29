#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    string name;
    Node* next;
    Node(string name){
        this->name = name;
        this->next = NULL;
    }
};

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int length = 0;
    void push(string name){
        Node* newNode = new Node(name);
        length++;
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop(){
        length--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head == NULL){
            tail = NULL;
        }
    }

    string front(){
        return head->name;
    }

    bool empty(){
        if(length == 0){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    myQueue mq;

    int queries;
    cin >> queries;

    for(int i = 1; i <= queries; i++){
        int cmd;
        cin >> cmd;
        if(cmd == 0){
            string name;
            cin >> name;
            mq.push(name);
        }
        if(cmd == 1){
            if(mq.empty()){
                cout << "Invalid" << endl;
            }else{
                cout << mq.front() << endl;
                mq.pop();
            }
        }
    }
    
    return 0;
}