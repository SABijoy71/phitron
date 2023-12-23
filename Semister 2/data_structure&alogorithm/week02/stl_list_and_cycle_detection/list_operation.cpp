#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> node1 = {10,20,60,30,50,40,90,80,60};
    // node1.remove(60); // remove specific value like all the 60 will be remove from this list
    // node1.sort(); // it will sort all the data in accending order
    // node1.sort(greater<int>()); // sort all the data in decending order
    // node1.unique(); // it remove all the duplicate value and the list should be sorted
    node1.reverse(); // reverse a list

    for(int val: node1){
        cout << val << " ";
    }
    return 0;
}