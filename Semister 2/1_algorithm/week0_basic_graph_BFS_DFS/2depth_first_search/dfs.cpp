#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5; // 1e5 = 10^5 = 100000
vector<int> v[N];
bool trac[N];

void dfs(int src){
    cout << src << endl;
    trac[src] = true;
    for(int child: v[src]){
        if(trac[child] == false){
            dfs(child);
        }
    }
    return;
}

int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(trac, false, sizeof(trac));

    dfs(0);

    return 0;
}