#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b){
    if((a.eng_marks+a.math_marks) > (b.eng_marks+b.math_marks)){
        return true;
    }else if((a.eng_marks+a.math_marks) < (b.eng_marks+b.math_marks)){
        return false;
    }else{
        if(a.id < b.id){
            return true;
        }else{
            return false;
        }
        }
}

int main(){

    int t;
    cin >> t;
    Student data[t];
    for(int i = 0; i < t; i++){
        cin >> data[i].name >> data[i].cls >> data[i].sec >> data[i].id >> data[i].math_marks >> data[i].eng_marks;
    }

    sort(data, data+t, cmp);

    for(int i = 0; i < t; i++){
        cout << data[i].name <<" "<< data[i].cls <<" "<< data[i].sec <<" "<< data[i].id <<" "<< data[i].math_marks <<" "<< data[i].eng_marks << endl;
    }

    return 0;
}