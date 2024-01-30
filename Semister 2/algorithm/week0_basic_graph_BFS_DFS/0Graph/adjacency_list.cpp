#include <bits/stdc++.h>
using namespace std;

int main(){

    int val,edge;
    cin >> val >> edge;
    vector<int> ara[val];
    while(edge--){
        int fNode,sNode;
        cin >> fNode >> sNode;

        // undirected graph
        ara[fNode].push_back(sNode);
        ara[sNode].push_back(fNode);

        // directed graph
        // ara[fNode].push_back(sNode)
    }

    // for(int value: ara[0]){
    //     cout << value << " ";
    // }

    for(int i = 0; i < ara[0].size(); i++){
        cout << ara[0][i] << endl;
    }

    return 0;
}