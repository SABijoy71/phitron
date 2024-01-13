#include <bits/stdc++.h>
using namespace std;

class Student{
public:
    int id;
    int mark;
    char name[100];
    char section;
    Student(int i,char nam[], char sec, int m){
        id = i;
        strcpy(name,nam);
        section = sec;
        mark = m;
    }
};

int main()
{

    int test;
    cin >> test;

    for(int i = 1; i <= test; i++){
        
        int id,mk;
        char nam[100], sec;

        cin >> id >> nam >> sec >> mk;
        Student std1(id,nam,sec,mk);

        cin >> id >> nam >> sec >> mk;
        Student std2(id,nam,sec,mk);
        
        cin >> id >> nam >> sec >> mk;
        Student std3(id,nam,sec,mk);

        if(std1.mark > std2.mark && std1.mark > std3.mark){
            cout << std1.id <<" "<< std1.name <<" "<< std1.section <<" "<< std1.mark << endl;
        }else if(std2.mark > std1.mark && std2.mark > std3.mark){
            cout << std2.id <<" "<< std2.name <<" "<< std2.section <<" "<< std2.mark << endl;
        }else if(std3.mark > std1.mark && std3.mark > std2.mark){
            cout << std3.id <<" "<< std3.name <<" "<< std3.section <<" "<< std3.mark << endl;
        }else if(std1.mark == std2.mark && std1.mark == std3.mark){
            if(std1.id < std2.id && std1.id < std3.id){
                cout << std1.id <<" "<< std1.name <<" "<< std1.section <<" "<< std1.mark << endl;
            }else if(std2.id < std1.id && std2.id < std3.id){
                cout << std2.id <<" "<< std2.name <<" "<< std2.section <<" "<< std2.mark << endl;
            }else if(std3.id < std1.id && std3.id < std2.id){
                cout << std3.id <<" "<< std3.name <<" "<< std3.section <<" "<< std3.mark << endl;
            }
        }else if(std1.mark == std2.mark){
            if(std1.id < std2.id){
                cout << std1.id <<" "<< std1.name <<" "<< std1.section <<" "<< std1.mark << endl;
            }else{
                cout << std2.id <<" "<< std2.name <<" "<< std2.section <<" "<< std2.mark << endl;
            }
        }else if(std1.mark == std3.mark){
            if(std1.id < std3.id){
                cout << std1.id <<" "<< std1.name <<" "<< std1.section <<" "<< std1.mark << endl;
            }else{
                cout << std3.id <<" "<< std3.name <<" "<< std3.section <<" "<< std3.mark << endl;
            }
        }else if(std2.mark == std3.mark){
            if(std2.id < std3.id){
                cout << std2.id <<" "<< std2.name <<" "<< std2.section <<" "<< std2.mark << endl;
            }else{
                cout << std3.id <<" "<< std3.name <<" "<< std3.section <<" "<< std3.mark << endl;
            }
        }

    }

    return 0;
}