#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int s = n-1;
    int k = 1;
    for(int i = 1; i <= n*2; i++){
        for(int j = 1; j <= s; j++){
            printf(" ");
        }
        for(int j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        if(i == n){
            k;
            s;
        }else if(i > n){
            k-=2;
            s++;
        }else{
            k+=2;
            s--;
        }
    }

    return 0;
}