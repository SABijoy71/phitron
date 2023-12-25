#include <stdio.h>

int main(){

    int row,col;
    scanf("%d %d", &row,&col);
    int value[row][col];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &value[i][j]);
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == row-1){
                printf("%d ", value[i][j]);
            }
        }
        
    }
    printf("\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(j == col-1){
                printf("%d ", value[i][j]);
            }
        }
        
    }

   

    return 0;
}