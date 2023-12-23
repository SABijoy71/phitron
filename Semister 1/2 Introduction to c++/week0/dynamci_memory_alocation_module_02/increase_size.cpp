#include <bits/stdc++.h>
using namespace std;

int main(){

    int *a = new int[5];
    int *b = new int[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    a = new int[10];
    for(int i = 0; i < 5; i++){
        a[i] = b[i];
    }
    delete[] b;
    for(int i = 5; i < 10; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }
    

    return 0;
}