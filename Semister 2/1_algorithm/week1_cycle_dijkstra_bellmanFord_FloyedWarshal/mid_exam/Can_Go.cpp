#include <bits/stdc++.h>
using namespace std;
#define lli long long int

const lli M = 1e18;
vector<pair<int,lli>> v[1005];
lli dis[1005];

class cmp{
    public:
    bool operator()(pair<int,lli> a, pair<int,lli> b){
        return a.first > a.second;
    } 
};

void dijkstra(int src){

    priority_queue<pair<int,lli>, vector<pair<int,lli>>, cmp> pq;
    pq.push({src,0});
    dis[src] = 0;
    while(!pq.empty()){
        pair<int,lli> parent = pq.top();
        pq.pop();
        int node = parent.first;
        lli cost = parent.second;

        for(pair<int,lli> child: v[node]){
            int childNode = child.first;
            lli childCost = child.second;
            if(cost+childCost < dis[childNode]){
                dis[childNode] = cost+childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
    
}

int main(){
    
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        lli c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }
    
    for(int i = 1; i <= n; i++){
        dis[i] = M;
    }

    int src;
    cin >> src;
    dijkstra(src);

    int test;
    cin >> test;
    while(test--){
        int d;
        lli dw;
        cin >> d >> dw;
        if(dis[d] <= dw){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}