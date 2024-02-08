#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val; // this one is for stored node value;
    Node* next; // this one is for stored next node address;
};

int main(){
    
    Node a,b,c,d; // Node create and node object
    a.val = 10; // assign value in node object
    b.val = 20;
    c.val = 30;
    d.val = 40;
    a.next = &b; // assign next node address b into a node
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    cout << a.val << endl; // return a value;
    cout << b.val << endl; // return b value;
    cout << (*a.next).val << endl; // return b value using a, first take the address of b and derefference it and the give .val to access the value of b;
    cout << a.next->val << endl; // return b value and -> sign is the sort form of derefference and .val access

    return 0;
}