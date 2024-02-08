#include <bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int>> pq;

    int val_len;
    cin >> val_len;
    while(val_len--){
        int val;
        cin >> val;
        pq.push(val);
    }
    
    int queries;
    cin >> queries;
    while(queries--){
        int cmd;
        cin >> cmd;

        if(cmd == 0){
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }else if(cmd == 1){
            if(!pq.empty()){
                cout << pq.top() << endl;
            }else{
                cout << "Empty" << endl;
            }
        }else if(cmd == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout << pq.top() << endl;
                }else{
                    cout << "Empty" << endl;
                }
            }else{
                cout << "Empty" << endl;
            }
        }
    }
    

    return 0;
}