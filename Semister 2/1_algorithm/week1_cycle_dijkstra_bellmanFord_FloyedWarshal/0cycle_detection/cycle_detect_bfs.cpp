#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
int parentAra[N];
bool ans;

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child: adj[parent]){
            
            if(vis[child] == true && parentAra[parent] != child){
                ans = true; // just for cycle detected
            }
            
            if(!vis[child]){
                vis[child] = true;
                parentAra[child] = parent;
                q.push(child);
            }   
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
            bfs(i);
        }
    }

    if(ans){
        cout << "cycle found" << endl;
    }else{
        cout << "cycle not found" << endl;
    }

    return 0;
}