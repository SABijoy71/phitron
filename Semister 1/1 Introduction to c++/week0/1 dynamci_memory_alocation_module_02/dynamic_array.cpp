#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    return a; // return the address form heap by using static pointer variable a
}

int main(){

    int *a = fun(); // receive address of heap by using static pointer variable;

    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

    return 0;
}