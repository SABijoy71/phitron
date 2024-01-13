#include <bits/stdc++.h>
using namespace std;

int main(){
    // vector<int>v; // type-1 just vector declaration

    // vector<int>v(10); // type-2 vector declaration and size initialize.

    // vector<int>v(10,10); // type-3 vector declaration with size and with value;

    // vector<int>v2(10,5); // type-4 vector declaration with size and with value
    // vector<int>v(v2); // type-4 vector declaration and copy value to another vector(v2);

    // int ara[6] = {10,20,30,40,50,60}; // type-5 array declare and value initialize
    // vector<int>v(ara,ara+6); // type-5 vector declare and copy value to another ara(ara)

    // vector<int> v2={1,2,3,4,5,9}; // vector declare and value initialize
    // vector<int> v(v2);

    vector<int> v={1,2,3,4};
    v.resize(2);
    v.resize(4);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    cout <<"size: "<< v.size() << endl;
    return 0;
}