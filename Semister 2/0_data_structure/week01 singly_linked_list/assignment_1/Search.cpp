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
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Node* head = NULL;
        Node* tail = head;
        int val;
        while (true)
        {   
            cin >> val;
            if(val == -1){
                break;
            }
            insert_tail(head,tail,val);
        }

        int x;
        cin >> x;
        int pos = 0;
        bool flag = false;
        Node*temp = head;
        while (temp != NULL)
        {
            if(temp->val == x){
                flag = true;
                break;
            }
            pos++;
            temp = temp->next;
        }
        
        if(flag == true){
            cout << pos << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    return 0;
}