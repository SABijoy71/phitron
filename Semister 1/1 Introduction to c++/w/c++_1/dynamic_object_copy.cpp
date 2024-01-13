#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

int main(){

    Person* rakib = new Person("rakib", 20);
    Person* sakib = new Person("sakib", 21);

    //sakib->name = rakib->name;
    //sakib->age = rakib->age;
    *sakib = *rakib; // rakib full oblect will copy into sakib 

    delete rakib;

    cout << sakib->name << " " << sakib->age << endl;

    return 0;
}