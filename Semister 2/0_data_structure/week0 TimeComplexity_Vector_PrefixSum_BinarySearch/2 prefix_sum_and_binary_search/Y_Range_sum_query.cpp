#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,q;
    cin >> n >> q;
    long long int ara[n];
    long long int pre[n];
    int i = 0;
    while(i < n){
        cin >> ara[i];
        if(i == 0){
            pre[i] = ara[i];
        }else{
            pre[i] = ara[i] + pre[i-1];
        }
        i++;
    }
    while(q--){
        long long int r,l;
        cin >> r >> l;
        r--;
        l--;
        long long int sum;
        if(r == 0){
            cout << pre[l] << endl;
        }else{
            cout << pre[l]-pre[r-1] << endl;
        }
        
    }
    return 0;
}