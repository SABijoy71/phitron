#include <bits/stdc++.h>
using namespace std;

#define lli long long int
const lli M = 1e18;
lli dis[1005];

class Edge{
    public:
    int u,v;
    lli c;
    Edge(int u, int v, lli c){
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main(){
    
    int n,e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while(e--){
        int u,v;
        lli c;
        cin >> u >> v >> c;
        edgeList.push_back(Edge(u,v,c));
    }

    for(int i = 1; i <= n; i++){
        dis[i] = M;
    }

    int src;
    cin >> src;
    dis[src] = 0;

    for(int i = 1; i <= n; i++){
        for(Edge child: edgeList){
            int u,v;
            lli c;
            u = child.u;
            v = child.v;
            c = child.c;
            if(dis[u] < M && dis[u]+c < dis[v]){
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;
    for(Edge child: edgeList){
        int u,v;
        lli c;
        u = child.u;
        v = child.v;
        c = child.c;
        if(dis[u] < M && dis[u]+c < dis[v]){
            cycle = true;
            break;
        }
    }

    int test;
    cin >> test;
    while(test--){
        if(cycle){
            cout << "Negative Cycle Detected" << endl;
            break;
        }

        int des;
        cin >> des;
        if(dis[des] < M){
            cout << dis[des] << endl;
        }else{
            cout << "Not Possible" << endl;
        }
        
    }

    return 0;
}