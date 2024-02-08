#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; // complexity is 1. so ignore it
    cin >> n; // complexity is 1. so ignore it
    int ara[n]; // complexity is 1. so ignore it

    for(int i = 0; i < n; i++){ // complexity is O(n);
        cin >> ara[i]; 
    }
    int sum = 0;
    for(int i = 0; i < n; i++){ // complexity is O(n) 
        sum += ara[i];
    }

    cout << "sum: " << sum << endl; // complexity is 1. so ignore it

    // calculate complexity
    // O(N+N)
    // O(2N) // ignore the constant value 2
    // O(N) // This is the final complexity

    return 0;
}