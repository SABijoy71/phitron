#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> node1 = {10,20,30,40,60,50,80,70};
    cout << node1.front() << endl; // return first value of a list
    cout << node1.back() << endl; // return last value of a list
    cout << *next(node1.begin(), 3) << endl; // return a pointer of a specific node and have to dereference it to generate the value

    return 0;
}

