#include <bits/stdc++.h>
using namespace std;

int main(){

    int nodes,edge;
    cin >> nodes >> edge;
    
    vector<int> ara[nodes];
    while(edge--){
        int fNode,sNode;
        cin >> fNode >> sNode;

        ara[fNode].push_back(sNode);
        ara[sNode].push_back(fNode);
    }

    int query;
    cin >> query;
    while(query--){
        int val;
        cin >> val;
        vector<int> store;
        if(ara[val].empty()){
            cout << -1 << endl;
        }else{
            for(int child: ara[val]){
                store.push_back(child);
            }
            sort(store.begin(), store.end(), greater<int>());
            for(int data: store){
                cout << data << " ";
            }
            cout << endl;
        }
    }

    return 0;
}