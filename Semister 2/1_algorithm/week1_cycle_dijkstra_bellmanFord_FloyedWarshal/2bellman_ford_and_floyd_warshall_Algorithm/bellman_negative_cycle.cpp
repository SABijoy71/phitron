#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
    int u,v,c;
    Edge(int u, int v, int c){
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5+5;
int dis[N];

int main(){
    
    int n,e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while(e--){
        int u,v,c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u,v,c)); // undirected
        // edgeList.push_back(Edge(v,u,c));
    }

    for(int i = 0; i < n; i++){
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for(int i = 1; i < n; i++){
        for(Edge child: edgeList){
            int u,v,c;
            u = child.u;
            v = child.v;
            c = child.c;
            if(dis[u] < INT_MAX && dis[u]+c < dis[v]){
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    int i = 0;
    for(Edge child: edgeList){
        i++;
        int u,v,c;
        u = child.u;
        v = child.v;
        c = child.c;
        if(dis[u] < INT_MAX && dis[u]+c < dis[v]){
            cycle = true;
            break;
        }
    }

    cout << i << endl;
    if(cycle){
        cout << "Cycle Detect. No answer." << endl;
    }else{
        for(int i = 0; i < n; i++){
            cout << i << " -> " << dis[i] << endl;
        }
    }

    return 0;
}