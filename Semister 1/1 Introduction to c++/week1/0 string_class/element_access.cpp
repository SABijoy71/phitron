#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    cout << s[2] << endl; // return nth element with using index 
    cout << s.at(2) << endl; // return nth element with using index
    cout << s[s.size()-1] << endl; // return last element or index value
    cout << s.back() << endl; // return last element or index value
    cout << s[0] << endl; // return first element or index value
    cout << s.front() << endl; // return first element or index value

    return 0;
}