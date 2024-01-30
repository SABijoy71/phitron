#include <bits/stdc++.h>
using namespace std;

// complexity O(N*M);

char ara[20][20];
bool vis[20][20];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}}; // node er children gula pete hole eigula cell er index (i,j) er sathe jog korte hobe. ete current cell er previous/next/up/down cell pawa jabe jegulu current cell/node/value er children

int n,m;
bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m){
        return false;
    }else{
        return true;
    }
}

void dfs(int si, int sj){
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++){ // jehetu children 4 ta fixed
        int ci = si + d[i].first; //si holo current cell/index/node,  d holo vector, d[i] holo vector er i th index and .first holo pair er first value
        int cj = sj + d[i].second;

        if(valid(ci, cj) == true && vis[ci][cj] == false){
            dfs(ci , cj);
        }
    }
}

int main(){

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ara[i][j];
        }
    }

    int si,sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si,sj);
    return 0;
}