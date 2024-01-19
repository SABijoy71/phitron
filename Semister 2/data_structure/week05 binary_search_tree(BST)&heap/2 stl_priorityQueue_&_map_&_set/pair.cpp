#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for(int i = 1, n = 5; i <= n; i++){
        pair<int,string> pr;
        int amount_in_number;
        string amount_in_word;

        cin >> amount_in_number;
        cin.ignore();
        getline(cin, amount_in_word);

        // Method-1
        // pr.first = amount_in_number;
        // pr.second = amount_in_word;
        
        // Method-2
        // pr = make_pair(amount_in_number, amount_in_word);

        // Method-3
        // pr = {amount_in_number, amount_in_word};

        cout << pr.first  << " " << pr.second << endl;
    }
    
    
    

    

    return 0;
}