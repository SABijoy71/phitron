// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i <= n; i++){ // outer loop O(N)
//         for(int j = 1; j <= n; j++){ // inner loop O(N);
//             cout << "hello" << endl;
//         }
//     }

//     // calculation 
//     // O(N*N);
//     // O(N^2);
//     // time complexity is O(N*N)/O(N*M);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}