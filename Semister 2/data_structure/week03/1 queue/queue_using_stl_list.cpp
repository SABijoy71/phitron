#include <bits/stdc++.h>
using namespace std;

class myQueue{
    public:

    list<int> mq;
    void push(int val){
        mq.push_back(val);
    }
    void pop(){
        mq.pop_front();
    }
    int front(){
        return mq.front();
    }
    int sz(){
        return mq.size();
    }
    bool isEmpty(){
        if(mq.empty()){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    myQueue mq;

    while(true){
        int val; 
        cin >> val;
        if(val == -1){
            break;
        }
        mq.push(val);
    }
    cout << "queue size: " << mq.sz() << endl;
    while(!mq.isEmpty()){
        cout << mq.front() << " done." << endl;
        mq.pop();
    }

    if(mq.isEmpty()){
        cout << "-----all done today-----" << endl;
    }

    return 0;
}