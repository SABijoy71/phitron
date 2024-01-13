#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> myList = {1,2,3,4,5};
    cout << myList.max_size() << endl;
    for(int val: myList){
        cout << val << " ";
    }
    cout << endl;

    myList.clear();
    myList.resize(5,100);
    cout << myList.size() << endl;
    for(int val: myList){
        cout << val << endl;
    }
    return 0;
}