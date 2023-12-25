#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:

    list<int> l;

    void push(int val){
        l.push_back(val);
    }
    void pop(){
        l.pop_back();
    }
    int top(){
        return l.back();
    }
    int sizeV(){
        return l.size();
    }
    bool isEmpty(){
        if(l.empty()){ // it returns true
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    myStack st;

    while (true)
    {
        int x;
        cin >> x;
        if(x == -1){
            break;
        }
        st.push(x);
    }

    while(!st.isEmpty()){ // it return false;
        cout << st.top() << endl;
        st.pop();   
    }
    
    
    return 0;
}