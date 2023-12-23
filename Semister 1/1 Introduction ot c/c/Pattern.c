#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int hash = 1;
    int space = n-1;
    for(int i = 1; i <= (n*2)-1; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        if(i%2 == 1){
            for(int j = 1; j <= hash; j++){
                printf("#");
            }
        }else{
            for(int j = 1; j <= hash; j++){
                printf("-");
            }
        }
        printf("\n");
        if(i < n){
            hash += 2;
            space --;
        }else{
            hash -= 2;
            space++;
        }
    }

    return 0;
}