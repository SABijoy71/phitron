#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    
    ll nodes,edges;
    cin >> nodes >> edges;
    ll adj[nodes][nodes];
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            adj[i][j] = INT_MAX;
            if(i == j){
                adj[i][j] = 0;
            }
        }
    }

    while(edges--){
        int fNode,sNode,cost;
        cin >> fNode >> sNode >> cost;
        adj[fNode][sNode] = cost;    
    }

    for(int k = 0; k < nodes; k++){
        for(int i = 0; i < nodes; i++){
            for(int j = 0; j < nodes; j++){
                if(adj[i][k] + adj[k][j] < adj[i][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    
    for(int i = 0; i < nodes; i++){
        for(int j = 0; j < nodes; j++){
            if(adj[i][j] == INT_MAX){
                cout << "IF" << " ";
            }else{
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    // cycle detect
    bool flag = false;
    for(int i = 0; i < nodes; i++){
        if(adj[i][i] < 0){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Cycle Detected" << endl;
    }else{
        cout << "Cycle Not Detected" << endl;
    }

    return 0;
}