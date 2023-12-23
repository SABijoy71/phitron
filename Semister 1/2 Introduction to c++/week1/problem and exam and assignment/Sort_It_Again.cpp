#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b){
    if(a.eng_marks > b.eng_marks){
        return true;
    }else if(a.eng_marks < b.eng_marks){
        return false;
    }else{
        if(a.math_marks > b.math_marks){
            return true;
        }else if(a.math_marks < b.math_marks){
            return false;
        }else{
            if(a.id < b.id){
                return true;
            }else{
                return false;
            }
        }
    }
}

int main(){

    int t;
    cin >> t;
    Student data[t];
    for(int i = 0; i < t; i++){
        cin >> data[i].name >> data[i].cls >> data[i].sec >> data[i].id >> data[i].math_marks >> data[i].eng_marks;
    }

    sort(data, data+t, cmp);

    for(int i = 0; i < t; i++){
        cout << data[i].name <<" "<< data[i].cls <<" "<< data[i].sec <<" "<< data[i].id <<" "<< data[i].math_marks <<" "<< data[i].eng_marks << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int cls, id, math_mark, eng_mark;
//     char section;
// };

// void printFunction(Student arr[], int n){

//     for (int j = 0; j < n - 1; j++){
//         for (int i = 0; i < n - j - 1; i++){
//             if (arr[i].eng_mark < arr[i + 1].eng_mark){
//                 swap(arr[i], arr[i + 1]);
//             }
//             else if (arr[i].eng_mark == arr[i+1].eng_mark){
//                 if (arr[i].math_mark < arr[i + 1].math_mark){
//                     swap(arr[i], arr[i + 1]);
//                 }
//                 else if (arr[i].math_mark == arr[i + 1].math_mark){
//                     if (arr[i].id > arr[i + 1].id){
//                         swap(arr[i], arr[i + 1]);
//                     }
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < n; i++){
//         cout << arr[i].name << " " << arr[i].cls << " " << arr[i].section << " " << arr[i].id << " " << arr[i].math_mark << " " << arr[i].eng_mark << endl;
//     }

// }

// int main(){

//     int n;
//     cin >> n;
//     Student data[n];
//     for (int i = 0; i < n; i++){
//         Student temp;
//         cin >> temp.name >> temp.cls >> temp.section >> temp.id >> temp.math_mark >> temp.eng_mark;
//         data[i] = temp;
//     }



//     printFunction(data, n);

//     return 0;
// }