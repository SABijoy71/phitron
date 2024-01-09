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

Node* inputTree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }

    queue<Node*> q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
    
        Node* p = q.front();
        q.pop();

        int l,r; 
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l == -1){
            myLeft = NULL;
        }else{
            myLeft = new Node(l);
        }

        if(r == -1){
            myRight = NULL;
        }else{
            myRight = new Node(r);
        }
        p->left = myLeft;
        p->right = myRight;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
void print_level_order(Node* root){
    if(root == NULL){
        cout << "empty" << endl;
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << temp->val << " ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

void insert(Node* &root, int val){
    if(root == NULL){
        root = new Node(val);
        return;
    }

    if(val < root->val){
        if(root->left == NULL){
            root->left = new Node(val);
        }else{
            insert(root->left, val);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(val);
        }else{
            insert(root->right, val);
        }
    }

}

int main(){

    Node* root = inputTree();
    cout << "before added value: ";
    print_level_order(root);
    cout << endl;
    
    int val;
    cin >> val;
    insert(root,val);
    cout << "after added value: ";
    print_level_order(root);

    return 0;
}