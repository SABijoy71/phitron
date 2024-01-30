#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
int level[1005];
int paren[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child: v[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
                paren[child] = par;
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
    memset(level, -1, sizeof(level));
    memset(paren, -1, sizeof(paren));

    int src,des;
    cin >> src >> des;
    bfs(src);

    vector<int> path;
    int x = des;
    while(x != -1){
        path.push_back(x);
        x = paren[x];
    }
    reverse(path.begin(), path.end());
    for(auto val: path){
        cout << val << " ";
    }    
    return 0;
}