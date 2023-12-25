#include <bits/stdc++.h>
using namespace std;

int main(){
    
    queue<int> mq;

    while(true){
        int val; 
        cin >> val;
        if(val == -1){
            break;
        }
        mq.push(val);
    }
    cout << "queue size: " << mq.size() << endl;
    while(!mq.empty()){
        cout << mq.front() << " done." << endl;
        mq.pop();
    }

    if(mq.empty()){
        cout << "-----all done today-----" << endl;
    }
    
    return 0;
}