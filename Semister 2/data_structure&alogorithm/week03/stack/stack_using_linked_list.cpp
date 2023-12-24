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
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop(){
        count--;
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

    myStack st;
    
    while (true)
    {
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        st.push(val);
    }

    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    
    return 0;
}