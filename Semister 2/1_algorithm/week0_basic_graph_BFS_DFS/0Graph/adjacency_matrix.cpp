#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,e;
    cin >> n >> e;
    int mat[n][n]; // jehetu value 5 porjonto tai 6x6 matrix create kora hoiche
    memset(mat, 0, sizeof(mat)); // assin 0 all sell of this matrix

    while(e--){
        int fNode,lNode;
        cin >> fNode >> lNode;

        // undirrected graph
        mat[fNode][lNode] = 1; // store 1 in current sell
        mat[lNode][fNode] = 1; // store 1 in current sell

        // dirrected graph
        // mat[fNode][lNode] = 1; // sudhu ekta connection hobe
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    if(mat[1][0] != 0){
        cout << "connection ache" << endl;
    }else{
        cout << "connection nai" << endl;
    }

    return 0;
}