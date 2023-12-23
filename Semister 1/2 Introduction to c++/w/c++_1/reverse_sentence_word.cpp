#include <bits/stdc++.h>
using namespace std;

void print(stringstream & ss){
    string word;
    if(ss >> word){
        print(ss);
        cout << word << endl;
    }
}

int main(){
    string name;
    getline(cin, name);
    stringstream ss(name);
    print(ss);

    return 0;
}