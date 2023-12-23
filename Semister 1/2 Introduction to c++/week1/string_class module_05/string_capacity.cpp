#include <bits/stdc++.h>
using namespace std;

// string capacity //

int main(){
    string s = "hello world";
    cout << s << endl;

    // size(),length(),max_size(),capacity() //
    cout << s.size() << endl; // return string length
    cout << s.length() << endl; // return string length
    cout << s.max_size() << endl; // return current available capacity of the string
    cout << s.capacity() << endl; // return current string capacity

    // clear() //
    s.clear();
    cout << s << endl;
    cout << s.length() << endl; // return current string length
    
    // empty() //
    if(s.empty() == true){ // empty() return true or false. if in this case file is empty then return true.
        printf("string is empty.\n");
    }else{
        printf("String is not empty.\n");
    }

    if(s.size()==0){
        cout << "empty\n";
    }else{
        cout << "Not empty\n";
    }

    // resize() //
    s.resize(5); // return new custom size of a string
    cout << s.length() << endl;
    cout << s << endl;
    s.resize(10, 'x'); // fill custom extended blank space with any character
    cout << s.length() << endl;
    cout << s << endl;

    return 0;
}