#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){ // node constructor
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    Node a(10); // create node object and pass parameter to the node constructor
    Node b(20);

    a.next = &b; // assign address of next node into a object

    cout << a.next->val << endl; // print node vlaue that means b value

    return 0;
}