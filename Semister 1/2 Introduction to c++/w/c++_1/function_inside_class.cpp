#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int num1;
    int num2;
    Person(string name, int age, int num1, int num2){
        this->name = name;
        this->age = age;
        this->num1 = num1;
        this->num2 = num2;

    }
    void fun(){
        cout << name << " " << age << endl;
    }
    int sum(){
        return num1+num2;
    }
};

int main(){
    
    string name = "sabbir ahmed";
    int age = 30;
    int num1 = 10;
    int num2 = 29;
    Person sabbir(name,age,num1,num2);
    cout << sabbir.sum() << endl;

    return 0;
}