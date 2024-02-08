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
        if(a.marks > b.marks){
            return true;
        }else if(a.marks < b.marks){
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
    
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, comp> pq;
    for(int i = 0; i < n; i++){
        string s;
        int roll;
        int marks;
        cin >> s >> roll >> marks;
        Student st(s,roll,marks);
        pq.push(st);
    }

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << " " << endl;
        pq.pop();
    }

    return 0;
}