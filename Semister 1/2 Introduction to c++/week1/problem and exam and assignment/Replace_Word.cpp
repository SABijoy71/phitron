#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string ans(string first, string second){

    string result;
    int n = second.length();
   
    for (int i = 0; i < first.size(); i++){ 
        string temp = first.substr(i, n);
        if (temp == second){ 
            result = result + "#";
            i = i + n-1;
            continue;
        }
        result = result + first[i];
    }
    return result;
}

string different(string first, string second){
    while (first.find(second) <= first.size()){
        first.replace(first.find(second), second.size(), "#");
    }
    return first;
}

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        string first, second;
        cin >> first >> second;

        cout << ans(first, second);

        cout << endl;

    }
    return 0;
}
