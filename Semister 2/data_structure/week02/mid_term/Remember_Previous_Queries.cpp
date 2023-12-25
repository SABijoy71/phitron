#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList;
    int quary;
    cin >> quary;
    for(int i = 1; i <= quary; i++){
        int x,v;
        cin >> x >> v;
        if(x == 0){
            myList.push_front(v);
        }else if(x == 1){
            myList.push_back(v);
        }else if(x == 2){
            if(v < myList.size()){
                myList.erase(next(myList.begin(), v));
            }
        }

        cout << "L -> ";
        for(int val: myList){
            cout << val << " ";
        }
        cout << endl;

        // myList.reverse();

        cout << "R -> ";
        // for(int val: myList){
        //     cout << val << " ";
        // }
        // cout << endl;

        // myList.reverse();

        for(int i = 1; i <= myList.size(); i++){
            cout << 
        }


        
    }
    return 0;
}