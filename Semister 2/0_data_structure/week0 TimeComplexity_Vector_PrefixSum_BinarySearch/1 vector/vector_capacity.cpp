#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    // cout<< v.size() << endl;
    // cout<< v.max_size() << endl;   
    // cout<< v.capacity() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    // v.clear();
    v.resize(2); // resize the vector
    v.resize(10,10); // resize the vector and added value in the extend size

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}