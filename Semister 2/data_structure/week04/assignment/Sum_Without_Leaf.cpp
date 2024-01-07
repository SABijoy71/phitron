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
        Node* pNode = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        Node* localLeft;
        Node* localRight;

        if(l == -1){
            localLeft = NULL;
        }else{
            localLeft = new Node(l);
        }

        if(r == -1){
            localRight = NULL;
        }else{
            localRight = new Node(r);
        }

        pNode->left = localLeft;
        pNode->right = localRight;

        if(pNode->left){
            q.push(pNode->left);
        }
        if(pNode->right){
            q.push(pNode->right);
        }
    }
    return root;
}

int sum_without_leaf(Node* root){

    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 0;
    }else{
        int lfn = sum_without_leaf(root->left);
        int rfr = sum_without_leaf(root->right);
        return lfn+rfr+root->val;;
    }
}


int main(){

    Node* root = inputTree();
    cout << sum_without_leaf(root) << endl;
    
    return 0;
}