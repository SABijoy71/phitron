#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "hello";
    string s1 = "new";

    // s += s1; // return s and s1 concatination string
    // s.append(s1); // return s and s1 concatination string

    s += "A"; // added a charecter into last of s string
    cout << s << endl;
    s = "hellow"; // Manualy added a charecter into last of s string 
    cout << s << endl;
    s.push_back('N'); // added a character into last of s string with function
    cout << s << endl;
    s.pop_back(); // remove last character in a string
    cout << s << endl;

    string s;
    cin >> s;
    cout << s << endl;
    while(s.length() != 0){
        s.pop_back();
        cout << s << endl;  // simple loop operation
    }

    string s = "helloworld";
    s.erase(4); // delete all the data form selected index
    s.erase(4,2); // delete value selected index to length  
    cout << s << endl;

    string s = "helloworld";
    // s.replace(5,0,"#"); // replace a specific value in to a specific index with remove and non remove
    s.insert(5,"%"); // insert value in to a specific index
    
    cout << s << endl;

    return 0;
}