#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        string s;
        cin >> s;
        stack <char> myStack;
        for(char c: s){
            if(myStack.empty()){
                myStack.push(c);
            }else if(c == '0' && myStack.top() == '1'){
                myStack.pop();
            }else if(c == '1' && myStack.top() == '0'){
                myStack.pop();
            }else{
                myStack.push(c);
            }
        }
        if(myStack.empty()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }  
    }
    return 0;
}