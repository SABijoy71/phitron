#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> node1 = {10,20,10,40,10};
    list<int> node3 = {100,200,300,400,500};
    list<int> node2 = node1; // copy one list to another
    list<int> node2(node1.begin(), node1.end()); // copy one list to another

    node1.push_back(100); // add node at last in this list
    node1.push_front(200); // add node at first in this list
    node1.pop_back(); // remove/delete node at last in this list
    node1.pop_front(); // remove/delete node at first in this list

    node1.insert(next(node1.begin(),2), 100); // insert value in a position from first
    node1.insert(next(node1.end(), -1), 300); // insert value in a position from last
    node1.insert(next(node1.begin(), 2), {100,200,300}); // insert multiple value in a position from first
    node1.insert(next(node1.begin(), 2), node3.begin(), node3.end()); // insert new list in a postion to another list
    // Explaination:
    // next(list er start node, how many index go far);
    // node1.begin() -> staring node, 2 -> how many index go far

    node1.erase(next(node1.begin(), 2)); // delete value in a position from first
    node1.erase(next(node1.end(), -1)); // delete value in a position from last

    replace(node1.begin(), node1.end(), 10, 100); // replace node1 all 10 into 100
    
    for(int n: node1){
        cout << n << " ";
    }

    auto it = find(node1.begin(), node1.end(), 10); // return a pointer according to the value is found or not

    if(it == node1.end()){
        cout << "not found" << endl;
    }else{
        cout << "found" << endl;
    }

    return 0;
}