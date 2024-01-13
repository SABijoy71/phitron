#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int t_row = (n/2)+6;
    int space = t_row-1,star = 1;
    for(int i = 1; i <= t_row; i++){
        for(int j = 1; j <= space; j++){
            printf(" ");
        }
        for(int j = 1; j <= star; j++){
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }
    
    for(int i = 1; i <= 5; i++){
        for(int s = 1; s <= 5; s++){
            printf(" ");
        }
        for(int k = 1; k <= n; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}