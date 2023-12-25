#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st; //built in stack library/class
    int valSize;
    cin >> valSize;
    for(int i = 1; i <= valSize; i++){
        int val;
        cin >> val;
        st.push(val);
    }

    cout << "size: " << st.size() << endl;

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}