#include <bits/stdc++.h>
using namespace std;

int main(){

    list<int> node1;
    
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        node1.push_back(val);
    }

    node1.sort();
    node1.unique();

    for(int v: node1){
        cout << v << " ";
    }
    cout << endl;

    return 0;
}