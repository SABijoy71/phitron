#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int dis[N];

class Edge{
    public:
    int fNode,sNode,cost;
    Edge(int fNode, int sNode, int cost){
        this->fNode = fNode;
        this->sNode = sNode;
        this->cost = cost;
    }
};

int main(){
    
    int n,e;
    cin >> n >> e;
    vector<Edge> edgeList;
    while(e--){
        int fNode,sNode,cost;
        cin >> fNode >> sNode >> cost;
        edgeList.push_back(Edge(fNode,sNode,cost));
    }

    for(int i = 0; i < n; i++){
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for(int i = 1; i < n; i++){
        for(Edge child: edgeList){
            if(dis[child.fNode] < INT_MAX && dis[child.fNode]+child.cost < dis[child.sNode]){
                dis[child.sNode] = dis[child.fNode]+child.cost;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << i << " - " << dis[i] << endl;
    }

    return 0;
}