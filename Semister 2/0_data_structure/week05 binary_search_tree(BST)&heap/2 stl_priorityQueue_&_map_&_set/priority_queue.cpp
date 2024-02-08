#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq; // max heap
    // priority_queue<int, vector<int>, greater<int>> pq; // min heap 
    // explain min <data_type, vector-> jehetu eta class niye kaj kore <int> vector data type, greater-> class for reverse order which means it will sort in small first way <data_type> 
    
    while(true){
        int test;
        cin >> test;

        if(test == 0){
            int val;
            cin >> val;
            pq.push(val); // O(logN);
        }else if(test == 1){
            pq.pop(); // O(logN);
        }else if(test == 2){
            cout << pq.top() << endl; // O(1);
        }else{
            break;
        }
    }

    return 0;
}