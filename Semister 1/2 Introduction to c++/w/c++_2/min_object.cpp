#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
};
int main(){
    int n;
    cin >> n;
    Student a[n];
    
    for(int i = 0; i < n; i++){
        
        cin >> a[i].name >> a[i].roll;

    }
    Student mn;
    mn.roll = INT_MAX;
    Student mx;
    mx.roll = INT_MIN;
    for(int i = 0; i < n; i++){
        // if(a[i].roll < mn.roll){
        //     mn = a[i];
        // }
        if(a[i].roll > mx.roll){
            mx = a[i];
        }
    }
    // cout << mn.name << " " << mn.roll << endl;
    cout << mx.name << " " << mx.roll << endl;
    return 0;
}