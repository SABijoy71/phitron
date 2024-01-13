#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout << s << endl;
    stringstream ss(s);
    string word;
    ss >> word;
    cout << word << endl;
    return 0;
}