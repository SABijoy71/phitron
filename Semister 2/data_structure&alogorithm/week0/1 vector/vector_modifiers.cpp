#include <bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v = {10,20,30,40,50,60};
    // vector<int> v2 = {1,2,3};
    // v = v2; //if due vector size is same O(1);
    // v = v2; //if due vector size is diffrent O(N);

    // v.pop_back(); // delete one by one value from the last
    // for(int i = 0; i < v.size(); i++){
    //     if(v[i] == 0){
    //         v[i] = 1;
    //     }
    //     cout << v[i] << " ";
    // }
    
    // v.insert(v.begin()+3, 0);
    
    vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+2, v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    // v.insert(v.begin()+3, v2.begin(), v2.end());

    // for(int x: v){ // shortcut for loop one by one value comeout for v->vector and assign into x and the x will printout
    //     cout << x << " ";
    // }
    // cout << endl;

    // v.erase(v.begin()+2);
    // v.erase(v.begin()+2, v.end()-1);
    // for(int y: v){
    //     cout << y << " ";
    // }
    
    // vector <int> v = {1,2,3,4,5,6,7,3,1,3,4};
    // replace(v.begin(), v.end(), 3, 10); // replace 3 to 10
    // for(int x: v){
    //     cout << x << " ";
    // }

    // vector <int>:: iterator it; // declare iterator in vector
    // it = find(v.begin(), v.end(), 3); // if there is value then return the value, else return -1;
    // or
    // auto it = find(v.begin(),v.end(),1);

    // cout << *it << endl;
    // if(it == v.end()){
    //     cout << "not found";
    // }else{
    //     cout << "found";
    // }

    return 0;
}