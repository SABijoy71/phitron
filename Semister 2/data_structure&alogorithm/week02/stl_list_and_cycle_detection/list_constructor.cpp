#include <bits/stdc++.h>
using namespace std;

int main(){

    initialize
    list<int> myList; // method-1 declare list without size
    list<int> myList (10); // method-2 declare list with size
    list<int> myList (5,10); // method-3 declare list with size and value

    //output
    cout << myList.size() << endl; // print size of list
    cout << myList.front() << endl; // print first value of list
    cout << myList.back() << endl; // print last value of list

    list<int> list2 = {1,2,3,4,5,6,7,8,9,10}; // method-4 declare list with assign different values
    list<int> myList(list2); // method-5 copy list into a list

    int ara[5] = {1,2,3,4,5};
    list<int> myList(ara, ara+5); // method-6 copy ara into a list

    vector<int> v = {10,20,30,40,50};
    list<int> myList(v.begin(),v.end()); // method-7 copy vector into a list

    
    cout << *myList.begin() << endl; // print first value of list
    cout << *myList.end() << endl; // print last value of list

    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it << endl;
    }

    // ranged based for loop
    for(int val: myList){
        cout << val << endl;
    }

    return 0;
}