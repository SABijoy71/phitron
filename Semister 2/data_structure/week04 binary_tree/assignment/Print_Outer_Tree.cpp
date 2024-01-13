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

void leftouterTree(Node* root){
    
    if(root->left == NULL && root->right == NULL){
        cout << root->val << " ";
    }
    if(root->left){
        leftouterTree(root->left);
        cout << root->val << " ";
    }else{
        if(root->right){
            leftouterTree(root->right);
            cout << root->val << " ";
        }
    }
}
void rightouterTree(Node* root){
    if(root->left == NULL && root->right == NULL){
        cout << root->val << " ";
    }
    if(root->right){
        cout << root->val << " ";
        rightouterTree(root->right);
    }else{
        if(root->left){
            cout << root->val << " ";
            rightouterTree(root->left);
        }
    }  
}

int main(){

    Node* root = inputTree();
    
    if(root->left){
        leftouterTree(root);
    }
    if(root->left == NULL){
        rightouterTree(root);
    }else if(root->right){
        rightouterTree(root->right);
    }
    
    return 0;
}