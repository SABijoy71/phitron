#include <bits/stdc++.h>
using namespace std;

// return array pointer from function int heap memory;

int *fun(){

    int *a = new int[5];
    
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }

    return a;

}

int main(){

    int *p = fun();
    
    for(int i = 0; i < 5; i++){
        cout << p[i] << endl;
    }

    return 0;
}
