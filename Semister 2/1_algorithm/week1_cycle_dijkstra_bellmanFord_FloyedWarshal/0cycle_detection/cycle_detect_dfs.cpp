#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
int parentAra[N];
bool ans;

void dfs(int src){
    vis[src] = true;
    for(int child: adj[src]){
        if(vis[child] && parentAra[src] != child){
            ans = true;
        }
        if(!vis[child]){
            parentAra[child] = src;
            dfs(child);
        }
    }
}

int main(){
    
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentAra, -1, sizeof(parentAra));
    ans = false;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    if(ans){
        cout << "cycle found" << endl;
    }else{
        cout << "cycle not found" << endl;
    }

    return 0;
}