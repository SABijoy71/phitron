#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){

    char s[100005];
    while(cin.getline(s,100005)){
        int len = strlen(s);
        sort(s, s+len);
        for(int i = 0; i < len; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                cout << s[i];
            }else{
               continue;
            }
        }
        cout << endl;
    }

    return 0;
}