#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    // ss << s; // or this way
    string word;
    while(ss >> word){
        cout << word << endl;
    }
    return 0;
}