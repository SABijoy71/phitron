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

void levelOrder(Node* root){
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

int main(){

    Node* root = inputTree();
    levelOrder(root);

    return 0;
}