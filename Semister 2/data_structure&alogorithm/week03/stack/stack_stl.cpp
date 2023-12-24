#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int valSize;
    cin >> valSize;
    for(int i = 1; i <= valSize; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    if(!st.empty()){
        st.pop();
    }

    if(!st.empty()){
        cout << st.top() << endl;
    }else{
        cout << "Stack is empty" << endl;
    }

    return 0;
}