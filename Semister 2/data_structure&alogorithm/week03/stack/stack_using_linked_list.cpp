#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:

    vector<int> v;

    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int sizeV(){
        return v.size();
    }
    bool isEmpty(){
        if(v.empty() == true){
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

    while(!st.isEmpty()){
        cout << st.top() << endl;
        st.pop();   
    }
    
    
    return 0;
}