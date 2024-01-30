#include <bits/stdc++.h>
using namespace std;

int main(){

    int val,edge;
    cin >> val >> edge;
    vector<int> ara[val];
    while(edge--){
        int fNode,sNode;
        cin >> fNode >> sNode;

        ara[fNode].push_back(sNode);
    }

    int query;
    cin >> query;
    while(query--){
        int src,desti;
        cin >> src >> desti;
        bool flag = false;
        if(src == desti){
            flag = true;
        }else{
            for(int child: ara[src]){
                if(child == desti){
                    flag = true;
                    break;
                }
            }
        }
        if(flag == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}