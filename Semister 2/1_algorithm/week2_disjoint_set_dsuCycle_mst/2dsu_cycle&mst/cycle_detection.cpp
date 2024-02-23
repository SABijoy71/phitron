#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int groupSize[N];

void dsu_initialize(int n){
    for(int i = 0; i < n; i++){
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

int dsu_find_leader(int node){
    if(parent[node] == -1){
        return node;
    }
    int leader = dsu_find_leader(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_BySize(int node1, int node2){
    int leaderA = dsu_find_leader(node1);
    int leaderB = dsu_find_leader(node2);
    if(groupSize[leaderA] > groupSize[leaderB]){
        parent[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }else{
        parent[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main(){
    
    int n,e;
    cin >> n >> e;
    dsu_initialize(n);
    bool cycle = false;

    while(e--){
        int a,b;
        cin >> a >> b;
        int leaderA = dsu_find_leader(a);
        int leaderB = dsu_find_leader(b);

        if(leaderA == leaderA){
            cycle = true;
        }else{
            dsu_union_BySize(a,b);
        }
    }

    if(cycle){
        cout << "cycle found" << endl;
    }else{
        cout << "cycle not found" << endl;
    }

    return 0;
}