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

void level_nodes(Node* root, int x){
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    bool flag = false;
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        Node* nod = parent.first;
        int level = parent.second;
        q.pop();

        if(level == x){
            flag = true;
            cout << nod->val << " ";
        }

        if(nod->left){
            q.push({nod->left, level+1});
        }
        if(nod->right){
            q.push({nod->right, level+1});
        }
    }
    if(flag == false){
        cout << "Invalid" << endl;
    }
}


int main(){

    Node* root = inputTree();
    
    int x;
    cin >> x;
    level_nodes(root,x);
    
    return 0;
}