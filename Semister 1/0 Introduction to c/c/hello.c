#include <stdio.h>

int count(int n){
    if(n == 0){
        return 0;
    }else{
        return 1 + count(n/10);
    }
}

int main(void){

    int n = 19294;
    int m = count(n);

    printf("%d", m);

    return 0;
}