#include <bits/stdc++.h>
using namespace std;

void fun(int *&p){ // &p means ptr pointer has been created a copy to p and if we change p means ptr pointer value
    p = NULL; // here is the changed value of ptr by using p
    cout << &p << endl;
}

int main(){

    int a = 10;
    int *ptr = &a;

    fun(ptr); // pass pointer ptr by fun function

    cout << &ptr << endl;

    return 0;
}