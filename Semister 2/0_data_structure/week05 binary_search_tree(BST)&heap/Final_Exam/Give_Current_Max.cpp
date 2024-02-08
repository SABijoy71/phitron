#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks < b.marks){
            return true;
        }else if(a.marks > b.marks){
            return false;
        }else{
            if(a.roll > b.roll){
                return true;
            }else{
                return false;
            }
        }
    }
};

int main(){
    
    priority_queue<Student, vector<Student>, comp> pq;

    int stu_len;
    cin >> stu_len;
    for(int i = 0; i < stu_len; i++){
        string s;
        int roll;
        int marks;
        cin >> s >> roll >> marks;
        Student st(s,roll,marks);
        pq.push(st);
    }

    int queries;
    cin >> queries;
    while(queries--){
        int cmd;
        cin >> cmd;
        if(cmd == 0){
            string s;
            int roll;
            int marks;
            cin >> s >> roll >> marks;
            Student st(s,roll,marks);
            pq.push(st);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << " " << endl;
        }else if(cmd == 1){
            if(!pq.empty()){
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << " " << endl;
            }else{
                cout << "Empty" << endl;
            }
        }else if(cmd == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << " " << endl;
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