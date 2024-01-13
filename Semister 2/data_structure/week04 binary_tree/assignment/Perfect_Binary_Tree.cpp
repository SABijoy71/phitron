#include <bits/stdc++.h>
using namespace std;

vector<int> v;

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

bool perfect_binary_tree(Node* root)
{
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;
    bool l = perfect_binary_tree(root -> left);
    bool r = perfect_binary_tree(root -> right);
    if(l == false || r == false) return false;
    return true;
}


int main(){

    Node* root = inputTree();
    if(perfect_binary_tree(root)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
    
    
    return 0;
}