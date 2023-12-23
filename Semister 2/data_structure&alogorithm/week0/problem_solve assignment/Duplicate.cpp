#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    int flag = false;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(ara[i] == ara[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}