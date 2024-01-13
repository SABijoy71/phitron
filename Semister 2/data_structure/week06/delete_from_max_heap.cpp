#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &max, int val){
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

void delete_heap(vector<int> &max){
    max[0] = max[max.size()-1];
    max.pop_back();
    int cur = 0;
    while(true){
        int left_idx = cur*2+1;
        int right_idx = cur*2+2;
        int last_idx = max.size()-1;
        if(left_idx <= last_idx && right_idx <= last_idx){
            // duitai ache
            if(max[left_idx] >= max[right_idx] && max[left_idx] > max[cur]){
                swap(max[left_idx], max[cur]);
                cur = left_idx;
            }else if(max[right_idx] >= max[left_idx] && max[right_idx] > max[cur]){
                swap(max[right_idx], max[cur]);
                cur = right_idx;
            }else{
                break;
            }
        }else if(left_idx <= last_idx){
            // left ache;
            if(max[left_idx] > max[cur]){
                swap(max[left_idx], max[cur]);
                cur = left_idx;
            }else{
                break;
            }
        }else if(right_idx <= last_idx){
            // right ache;
            if(max[right_idx] > max[cur]){
                swap(max[right_idx], max[cur]);
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
    
    vector<int> max;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int val;
        cin >> val;
        insert_heap(max, val);
    }

    delete_heap(max);
    delete_heap(max);

    for(int val: max){
        cout << val << " ";
    }

    return 0;
}