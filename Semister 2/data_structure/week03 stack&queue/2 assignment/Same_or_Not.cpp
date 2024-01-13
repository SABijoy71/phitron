#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> myStack;
    queue<int> myQueue;

    int s_size, q_size;
    cin >> s_size >> q_size;

    for(int i = 1; i <= s_size; i++){
        int val;
        cin >> val;
        myStack.push(val);
    }

    for(int i = 1; i <= q_size; i++){
        int val;
        cin >> val;
        myQueue.push(val);
    }
    

    bool flag= true;

    if(s_size == q_size){
        for(int i = 1; i <= s_size; i++){
            if( myStack.top() != myQueue.front()){
                flag = false;
                break;
            }
            myQueue.pop();
            myStack.pop();
        }
    }else{
        flag = false;
    }

    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}