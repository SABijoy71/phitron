#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "hello";
    string b = "world";
    // a += b; // both are same for concatination two string.
    // a.append(b);

    string c = "wow";
    string d = "man";
    // c[3] = 'A'; don't work;
    // c = c + "N";
    // c.push_back('o'); added one char in last
    // c.pop_back(); remove last char form string

    string e = "backback";
    // e.assign("this");
    // e.erase(1,1); (start index,length-character of character);
    // e.replace(4,3,"rol"); (start index, length-of character,replace string)
    // e.insert(4,"to"); (index, string-to replace);

    cout << e << endl;

    return 0;
}