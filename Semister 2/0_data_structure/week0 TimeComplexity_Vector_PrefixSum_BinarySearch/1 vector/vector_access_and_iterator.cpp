#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {10,20,30,40,50};

    // vector access:
    // cout << v[0] << endl; // manual first value access
    // cout << v[v.size()-1] << endl; // manual last value access
    // cout << v.front() << endl; // first value access with function
    // cout << v.back() << endl; // last value access with function

    // vector iterator
    // vector <int>:: iterator it;
    for(auto it = v.begin(); it < v.end(); it++){
        cout << *it << endl;
    }
    
    return 0;
}