#include <bits/stdc++.h>
using namespace std;
namespace Rakib{
    int age = 10;
    void hello(){
        cout << "rakib namespace" << endl;
    }
}
namespace Sakib{
    int age2 = 20;
    void hello2(){
        cout << "sakib namespace" << endl;
    }
}
using namespace Rakib;
int main(){
    cout << age << endl;
    hello();
    return 0;
}