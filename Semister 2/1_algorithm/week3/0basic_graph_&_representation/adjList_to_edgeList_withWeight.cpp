#include <bits/stdc++.h>
using namespace std;

class Edges{
    public:
    int u,v,w;
    Edges(int u,int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main(){
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> v[n];
    while(e--){
        int a,b,w;
        cin >> a >> b >> w;
        v[a].push_back({b,w});
        // v[b].push_back({a,w});
    }
    cout << "adjList: " << endl;
    for(int i = 0; i < n; i++){
        for(pair<int,int> child: v[i]){
            cout << i << "-> {" << child.first << "," << child.second << "}" << endl;
        }
    }
    vector<Edges> edgeList;
    for(int i = 0; i < n; i++){
        for(pair<int,int> child: v[i]){
            edgeList.push_back(Edges(i,child.first,child.second));
        }
    }
    cout << "edgeList: " << endl;
    for(Edges child: edgeList){
        cout << child.u << " " << child.v << " " << child.w << endl;
    }
    return 0;
}