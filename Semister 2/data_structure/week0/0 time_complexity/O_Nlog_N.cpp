#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    // while(n > 0){
    //     int digit = n%10;   // complexity is O(logN)
    //     cout << digit << endl;
    //     n /= 10;
    // }

    for(int i = 1; i <= 100; i*=2){ //complexity is O(logN);
        cout << i << endl;
    }


    return 0;
}