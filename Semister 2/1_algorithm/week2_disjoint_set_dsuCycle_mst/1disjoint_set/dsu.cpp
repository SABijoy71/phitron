#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int par[N];
int groupSize[N];
int level[N];

// this is for vlaue set of every declared array
void dsu_initialize(int n){
    for(int i = 0; i < n; i++){
        par[i] = -1;
        groupSize[i] = 1;
        level[i] = 0;
    }
}

// this is for finding leader value of a specific node
int dsu_find(int node){ 
    if(par[node] == -1){
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

// this is for making friendship of two different set with a specific single vlaue
void dsu_union(int node1, int node2){  // bad complexity
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}

// this is for making friendship of two different set with a specific single vlaue with set size
void dsu_union_size(int node1, int node2){ 
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(groupSize[leaderA] > groupSize[leaderB]){
        par[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }else{
        par[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

// this is for making friendship of two different set with a specific single vlaue with level size
void dsu_union_level(int node1, int node2){ 
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(level[leaderA] > level[leaderB]){
        par[leaderB] = leaderA;
    }else if(level[leaderB] > level[leaderA]){
        par[leaderA] = leaderB;
    }else{
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}

int main(){
    
    dsu_initialize(8);
    dsu_union_level(1,2);
    dsu_union_level(2,3);
    dsu_union_level(4,5);
    dsu_union_level(5,6);
    dsu_union_level(1,4);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;

    return 0;
}