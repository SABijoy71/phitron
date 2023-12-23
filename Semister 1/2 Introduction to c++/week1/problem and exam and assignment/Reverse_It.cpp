#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
};

int main(){

    int t;
    cin >> t;
    Student data[t];
    for(int i = 0; i < t; i++){
        cin >> data[i].name >> data[i].cls >> data[i].sec >> data[i].id;
    }

    // for(int i = 0, j= t-1; i < t/2; i++, j--){
        
    //     char rev = data[i].sec;
    //     data[i].sec = data[j].sec;
    //     data[j].sec = rev;
        
    // }

    for(int i = 0; i < t; i++){
        cout << data[i].name <<" "<< data[i].cls <<" "<< data[i].sec <<" "<< data[i].id << endl;
    }

    return 0;
}