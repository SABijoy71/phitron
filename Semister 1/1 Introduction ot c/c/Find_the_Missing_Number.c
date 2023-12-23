#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        long long int num1;
        int num2,num3,num4;
        scanf("%lld %d %d %d", &num1,&num2,&num3,&num4);
        if(num1 == 0){
            printf("0\n");
        }else if(num1%(num2*num3*num4) != 0){
            printf("-1\n");
        }else{
            printf("%lld\n", num1/(num2*num3*num4));
        }  
    }

    return 0;
} 