#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    vector<int> v[n];
    while(e--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
    }
    vector<pair<int,int>> edgeList;
    for(int i = 0; i < n; i++){
        for(int child: v[i]){
            edgeList.push_back({i,child});
        }
    }
    for(pair<int,int> child: edgeList){
        cout << child.first << " " << child.second << endl;
    }
    return 0;
}