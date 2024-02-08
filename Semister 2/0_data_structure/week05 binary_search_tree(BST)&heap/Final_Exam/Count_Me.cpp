#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;
    cin.ignore();
    for(int i = 1; i <= test; i++){
        
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string,int> mp;

        string answer;
        int best = 0;

        while(ss >> word){
            mp[word]++;
            if(best < mp[word]){
                answer = word;
                best = mp[word];   
            }
        }
        cout << answer << " " << best << endl;
    }

    return 0;
}