#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> max;
    int len;
    cin >> len;
    
    for(int i = 1; i <= len; i++){
        int val;
        cin >> val;
        max.push_back(val);
        int cur_idx = max.size()-1;
        
        while(cur_idx != 0){
            int parent_idx = (cur_idx-1)/2;
            if(max[cur_idx] > max[parent_idx]){
                swap(max[cur_idx], max[parent_idx]);
            }else{
                break;
            }
            cur_idx = parent_idx;
        }
    }

    cout << endl;
    for(int val: max){
        cout << val << " ";
    }


    return 0;
}