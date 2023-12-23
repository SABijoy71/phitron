#include <bits/stdc++.h>
using namespace std;

int main(){
    string names;
    getline(cin,names);
    
    string name = "Jessica";
    
    stringstream allNames(names);
    string word;

    int flag = 0;
    
    while(allNames >> word){
    
        if(word == name){
            flag = 1;
            break;
        }
        
    }

    if(flag == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}