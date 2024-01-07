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
        // value gula store korche another node e
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

int count_height(Node* root){
    if(root == NULL){
        return 0;
    }

    if(root == NULL){
        return 0;
    }else{
        int l = count_height(root->left);
        int r = count_height(root->right);
        return max(l,r) + 1;
    }
    
}

int main(){

    Node* root = inputTree();
    cout << count_height(root) << endl;

    return 0;
}