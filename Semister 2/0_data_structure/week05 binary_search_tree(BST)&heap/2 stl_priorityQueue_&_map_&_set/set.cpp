#include <bits/stdc++.h>
using namespace std;

int main(){
    
    set<int> s;
    // explain
    // set-> class <int>-> data type and s-> is variable;
    // set sort all the value in accending order O(logN)
    // set removes all the duplicate value O(logN)

    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        s.insert(x); // added value into set using insert() function.
        // complexity O(logN);
    }

    if(s.count(10)) // searching a value O(logN)
        cout << "YES" << endl;
    else
        cout << "No" << endl;

    cout << s.count(10) << endl; // complexity O(logN)

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }

    return 0;
}