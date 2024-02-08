#include <bits/stdc++.h>
using namespace std;

char ara[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool is_true;

bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m){
        return false;
    }else{
        return true;
    }
}

void dfs(int si, int sj){

    if(ara[si][sj] == 'B'){
        is_true = true;
        return;
    }
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if(valid(ci, cj) == true && vis[ci][cj] == false && ara[ci][cj] != '#'){
            dfs(ci, cj);
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

    int si = -1,sj = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(ara[i][j] == 'A'){
                si = i;
                sj = j;
                break;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    dfs(si,sj);
    if(is_true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}