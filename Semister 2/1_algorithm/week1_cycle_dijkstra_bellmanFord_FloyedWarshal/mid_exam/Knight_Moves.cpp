#include <bits/stdc++.h>
using namespace std;

/* (-2,-1)          (-2,1)
(-1,-2)                  (-1,2)
            K(0,0)
(1,-2)                  (1,2)  
    (2,-1)          (2,1)*/
vector<pair<int,int>> d = {{-2,-1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1}};

int n,m;

bool vis[105][105];
int dis[105][105];

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first;
        int b = par.second;
        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
}

int main(){
    
    int test;
    cin >> test;

    while(test--){
        
        int ki,kj;
        int qi,qj;

        cin >> n >> m;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vis[i][j] = false;
                dis[i][j] = -1;
            }
        }

        cin >> ki >> kj;
        cin >> qi >> qj;
        bfs(ki,kj);
        
        if(dis[qi][qj] == -1){
            cout << -1 << endl;
        }else{
            cout << dis[qi][qj] << endl;
        }

    }

    return 0;
}