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

int size_linked_list(Node* head){
    Node *temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main(){

    Node* head = NULL;  // first linked list
    Node* tail = head;

    Node* head2 = NULL; // second linked list
    Node* tail2 = head2;

    int val;
    while (true)
    {   
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head,tail,val);
    }
    int length1 = size_linked_list(head);

    int val2;
    while (true)
    {   
        cin >> val2;
        if(val2 == -1){
            break;
        }
        insert_tail(head2,tail2,val2);
    }
    int length2 = size_linked_list(head2);
    
    if(length1 != length2){
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    if(length1 == length2){
        Node* temp = head;
        Node* temp2 = head2;
        while(temp != NULL){
            if(temp->val != temp2->val){
                flag = false;
                break;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
        if(flag == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    

    

    return 0;
}