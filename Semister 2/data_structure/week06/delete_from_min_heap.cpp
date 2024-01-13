#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &min, int val){
    min.push_back(val);
    int cur_idx = min.size()-1;
        
    while(cur_idx != 0){
        int parent_idx = (cur_idx-1)/2;
        if(min[cur_idx] < min[parent_idx]){
            swap(min[cur_idx], min[parent_idx]);
        }else{
            break;
        }
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &min){
    min[0] = min[min.size()-1];
    min.pop_back();
    int cur = 0;
    while(true){
        int left_idx = cur*2+1;
        int right_idx = cur*2+2;
        int last_idx = min.size()-1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            // duitai ache
            if(min[left_idx] <= min[right_idx] && min[left_idx] < min[cur]){
                swap(min[left_idx], min[cur]);
                cur = left_idx;
            }else if(min[right_idx] <= min[left_idx] && min[right_idx] < min[cur]){
                swap(min[right_idx], min[cur]);
                cur = right_idx;
            }else{
                break;
            }
        }else if(left_idx <= last_idx){
            // left ache;
            if(min[left_idx] < min[cur]){
                swap(min[left_idx], min[cur]);
                cur = left_idx;
            }else{
                break;
            }
        }else if(right_idx <= last_idx){
            // right ache;
            if(min[right_idx] < min[cur]){
                swap(min[right_idx], min[cur]);
                cur = right_idx;
            }else{
                break;
            }
        }else{
            break;
        }
    }
}

int main(){
    
    vector<int> min;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        insert_heap(min, val);
    }

    delete_heap(min);
    delete_heap(min);
    delete_heap(min);

    for(int val: min){
        cout << val << " ";
    }

    return 0;
}