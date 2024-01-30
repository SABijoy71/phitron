#include <bits/stdc++.h>
using namespace std;

int main(){
    int val,edge;
    cin >> val >> edge;
    vector< pair<int,int> > v;
    while(edge--){
        int fNode,sNode;
        cin >> fNode >> sNode;

        // v.push_back(make_pair(fNode,sNode));
        // or
        v.push_back({fNode, sNode});
    }

    // range based for loop //
    for(pair<int,int> p: v){
        cout << p.first << " " << p.second << endl;
    }
    // or
    // for(auto p: v){
    //     cout << p.first << " " << p.second << endl;
    // }


    // simple for loop //
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i].first << " " << v[i].second << endl;
    // }

    return 0;
}