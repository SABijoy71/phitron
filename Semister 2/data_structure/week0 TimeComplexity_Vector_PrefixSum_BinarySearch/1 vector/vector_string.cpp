#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector <string> v(n);
    // for(int i = 0; i < n; i++){
    //     string s;
    //     cin >> s;
    //     // v.push_back(s); // added string last method-1
    //     v[i] = s; // copy string method-2
    // }
    // // for(int i = 0; i < n; i++){
    // //     cout << v[i] << endl;
    // // }
    // for(string st: v){ // shortcut loop
    //     cout << st << endl;
    // }

    for(int i = 0; i < n; i++){
        getline(cin, v[i]);
    }
    for(string st: v){
        cout << st << endl;
    }
    return 0;
}