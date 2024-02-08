#include <bits/stdc++.h>
using namespace std;
#define lli long long int
const lli M = 1e18;

int main(){
    
    int nodes,edges;
    cin >> nodes >> edges;
    lli adj[nodes+1][nodes+1];
    for(int i = 0; i <= nodes; i++){
        for(int j = 0; j <= nodes; j++){
            adj[i][j] = M;
            if(i == j){
                adj[i][j] = 0;
            }
        }
    }

    while(edges--){
        int fNode,sNode;
        lli cost;
        cin >> fNode >> sNode >> cost;
        int current_cost = cost;
        if(adj[fNode][sNode] > current_cost){
            adj[fNode][sNode] = current_cost; 
        }
    }

    for(int k = 1; k <= nodes; k++){
        for(int i = 1; i <= nodes; i++){
            for(int j = 1; j <= nodes; j++){
                if(adj[i][k] + adj[k][j] < adj[i][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++){
        int src,des;
        cin >> src >> des;
        if(adj[src][des] == M){
            cout << -1 << endl;
        }else{
            cout << adj[src][des] << endl;
        }
    }

    return 0;
}