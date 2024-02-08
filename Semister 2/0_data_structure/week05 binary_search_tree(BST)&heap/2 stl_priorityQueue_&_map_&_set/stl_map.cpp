#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> mp; // class->map <key, value> variable_name;

    // Insert --------- section //

    // Insert method -1
    // mp.insert({"sakib", "Allrounder"}); // {key,value} => like array [index] = value;
    // // "sakib" is a key and "Allrounder" is the value of key. 
    // // We created a pair<first_value, second_value>;

    // mp.insert({"akib", "batsman"});
    // mp.insert({"azhar", "Bowler"});
    // mp.insert({"mushfiq", "Keeper"});

    // Insert method -2
    // mp["sakib"] = "Allrounder"; // complexity O(logN)
    // mp["akib"] = "bats's man";
    // mp["mushfiq"] = "keeper";
    // mp["mushfiq"] = "sleper";
    // mp["taskin"] = "bowler"; 

    


    // output--------section //

    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl; // complexity O(logN);
    }

    //cout << mp["sakib"] << endl; // we have used "sakib" as a key to access sakib's value which is "Allrounder".

    // if(mp.count("mushfiq")){
    //     cout << "ace" << endl;
    // }else{
    //     cout << "nai" << endl;
    // }

    // cout << mp["mushfiq"] << endl;

    return 0;
}