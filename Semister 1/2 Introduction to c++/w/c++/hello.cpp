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

int main(){

    Student rahim(10, 10, 4.11);

    cout << "Rahim: " << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;

    return 0;
}