#include <bits/stdc++.h>
using namespace std;

class Node{
    public:

    Node* left;
    Node* right;
    int val;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrder(Node* root){
    if(root == NULL){
        cout << "empty" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // access front node from Queue and store it
        Node* store = q.front();
        q.pop();

        // operation with values
        cout << store->val << " ";

        // left and right children gula push kore diche
        if(store->left){ 
            q.push(store->left);
        }
        if(store->right){
            q.push(store->right);
        }
    }
}

int main(){

    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    levelOrder(root);

    return 0;
}