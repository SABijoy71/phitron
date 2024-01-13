#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    string:: iterator it;
    cin >> s;
    cout << *s.begin() << endl; // return first index value
    cout << *(s.end()-1) << endl; // return last index position

    for(it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }

    for(string::iterator it = s.begin(); it < s.end(); it++){
        cout << *it << endl;
    }

    for(auto it = s.begin(); it < s.end(); it++){
        cout << *it << " ";
    }

    auto it = s.begin();
    while(it < s.end()){
        cout << *it << endl;
        it++;
    }

    return 0;
}