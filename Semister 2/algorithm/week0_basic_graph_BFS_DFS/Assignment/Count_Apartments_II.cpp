#include <bits/stdc++.h>
using namespace std;

char ara[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
int room = 0;

bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m){
        return false;
    }else{
        return true;
    }
}

void dfs(int si, int sj){

    vis[si][sj] = true;
    room = room + 1;
    
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

    memset(vis, false, sizeof(vis));
    vector<int> rooms;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
            if(!vis[i][j]){
                if(ara[i][j] != '#'){
                    dfs(i,j);
                    rooms.push_back(room);
                    room = 0;
                }
            }
            
        }
    }

    sort(rooms.begin(), rooms.end());
    if(rooms.empty()){
        cout << 0 << endl;
    }else{
        for(int val: rooms){
            cout << val << " ";
        }
        cout << endl;
    }
    

    return 0;
}