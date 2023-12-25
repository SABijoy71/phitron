#include <stdio.h>

void sort(int a[], int n){
    int b[n];
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(b[i] > b[j]){
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    int c[n];
    for(int i = 0; i < n; i++){
        int dif = a[i] - b[i];
        if(dif < 0){
            c[i] = dif*-1;
        }else{
            c[i] = dif;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", c[i]);
    }
}

int main(){

    int test;
    scanf("%d", &test);

    for(int i = 1; i <= test; i++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        sort(a,n);
        printf("\n");
    }

    return 0;
}