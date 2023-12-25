#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ara[n];
    long long int prefix_ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
        if(i == 0){
            prefix_ara[i] = ara[i];
        }else{
            prefix_ara[i] = ara[i] + prefix_ara[i-1];
        }
    }
    for(int i = n-1; i >= 0; i--){
        cout << prefix_ara[i] << " ";
    }
    

    return 0;
}