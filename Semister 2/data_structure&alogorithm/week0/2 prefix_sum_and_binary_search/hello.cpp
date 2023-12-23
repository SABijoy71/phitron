#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b, int ara[], int size){
    int sum = 0;
    for(int i = a; i <= b; i++){
        sum+= ara[i];
    }
    return sum;
}

int main(){
    int n,q;
    cin >> n >> q;
    int ara[n];
    for(int i = 0; i < n; i++){
        cin >> ara[i];
    }
    for(int i = 0; i < q; i++){
        int l,r;
        cin >> l >> r;
        int s = sum(l-1,r-1,ara,n);
        cout << s << endl;
    }
    return 0;
}