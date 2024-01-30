#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];

void bfs(int src, int level, int des){
    queue<pair<int,int>> q;
    q.push({src,level});
    vis[src] = true;
    while (!q.empty())
    {
        pair<int,int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        if(par == des){
            cout << level << endl;
        }
        for(int child: v[par]){
            if(vis[child] == false){
                q.push({child,level+1});
                vis[child] = true;
            }
        }
    }
}

int main(){
    
    int n,e;
    cin >> n >> e;

    while(e--){
        int fVal,sVal;
        cin >> fVal >> sVal;
        v[fVal].push_back(sVal);
        v[sVal].push_back(fVal);
    }

    memset(vis, false, sizeof(vis));

    bfs(0,0,5);
    
    return 0;
}