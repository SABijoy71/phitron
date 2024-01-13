#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int *p = new int;
    *p = 10;
    return p; // return int p heap address
}

float* fun1(){
    float *f = new float;
    *f = 10.11;
    return f; // return float f heap address
}

char *fun2(){
    char *ch = new char;
    *ch = 'A';
    return ch; // return char ch heap address
}

int main(){

    int *r = fun(); // int *r to receive fun() address 
    float *f = fun1(); // int *f to receive fun1() address 
    char *ch = fun2(); // int *ch to receive fun2() address 

    cout << *r << endl;
    cout << *f << endl;
    cout << *ch << endl;

    delete r; // delete heap memory data after complete execution;

    return 0;
}

// we have return integer data form heap by using static varaible p;
// so here we can't access directly heap memory section 
// we have to store the value return from heap by static pointer variable
// then we can return heap varaible address by using stack variable
// the heap varaible that is a pointer so we have to receive the data by using static pointer variable.