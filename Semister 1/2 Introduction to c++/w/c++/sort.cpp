#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int num[n];
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    // sort(num , num+n); // ascending
    sort(num, num+n, greater<int>()); // decending
    for(int i = 0; i < n; i++){
        cout << num[i] << " ";
    }

    return 0;
}