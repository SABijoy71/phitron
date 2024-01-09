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

Node* convert(int ara[], int l, int r){
    if(l > r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node* root = new Node(ara[mid]); // jehetu first e root nai tai mid diye root create kore nicchi

    Node* leftRoot = convert(ara,l,mid-1); // leftroot generate korche
    Node* rightRoot = convert(ara,mid+1,r); // rightroot generate korche
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main(){
    
    int size;
    cin >> size;

    int ara[size];
    for(int i = 0; i < size; i++){
        cin >> ara[i];
    }

    Node* root = convert(ara,0,size-1);    

    return 0;
}