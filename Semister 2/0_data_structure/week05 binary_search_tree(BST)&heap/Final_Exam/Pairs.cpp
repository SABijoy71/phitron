#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int id;
    Student(string name, int id){
        this->name = name;
        this->id = id;
    }
};

class comp{
    public:
    bool operator()(Student a, Student b){
        if(a.name > b.name){
            return true;
        }else if(a.name < b.name){
            return false;
        }else{
            if(a.id < b.id){
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
        int id;
        cin >> s >> id;
        Student st(s,id);
        pq.push(st);
    }

    while(!pq.empty()){
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}