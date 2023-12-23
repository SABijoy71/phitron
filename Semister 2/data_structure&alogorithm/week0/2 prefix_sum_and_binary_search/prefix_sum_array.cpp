#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int ara[n];
    int pre[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        if(i == 0){
            pre[i] = ara[i];
        }else{
            pre[i] = ara[i] + pre[i-1];
        }
    }
    while(q--){
        int r,l;
        cin >> r >> l;
        r--;
        l--;
        int sum;
        if(r == 0){
            sum = pre[l];
        }else{
            sum = pre[l]-pre[r-1];
        }
        cout << sum << endl;
        
    }
    return 0;
}