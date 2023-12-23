#include<stdio.h>

int count_before_one(int numbers[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(numbers[i] == 1){
            break;
        }else{
            count++;
        }
    }

    return count;
}

int main(){

    int size;
    scanf("%d", &size);
    int numbers[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &numbers[i]);
    }

    printf("%d", count_before_one(numbers,size));

    return 0;
}