#include<stdio.h>

void odd_even(){
    
    int n;
    scanf("%d", &n);
    int value[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &value[i]);
    }
    
    int odd = 0,even = 0;
    for(int i = 0; i < n; i++){
        if(value[i] % 2 == 0){
            odd++;
        }else{
            even++;
        }
    }

    printf("%d %d\n", odd,even);
}

int main(){

    odd_even();

    return 0;
}