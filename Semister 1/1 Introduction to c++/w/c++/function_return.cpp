#include <bits/stdc++.h>
using namespace std;

class Student{
    public:

    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, double gpa){
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student * fun(){
    Student *rahim;
    rahim = new Student(10,10,29.29);
    return rahim;
}

int main(){

    Student *ans = fun();
    
    cout << ans->cls << " " << ans->roll << " " << ans->gpa << endl;

    delete ans;

    return 0;
}