#include <bits/stdc++.h>
using namespace std;

int main(){

    int *ara = new int[3];
    int *ara2 = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> ara[i];
        ara2[i] = ara[i];
    }
    delete[] ara;
    
    ara = new int[5];
    for(int i = 0; i < 3; i++){
        ara[i] = ara2[i];
    }
    delete[] ara2;

    ara[3] = 40;
    ara[4] = 50;
    
    for(int i = 0; i < 5; i++){
        cout << ara[i] << " ";
    }


    return 0;
}