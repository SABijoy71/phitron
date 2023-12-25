#include<stdio.h>

int count(char game[], int size){
    int t = 0,p = 0;
    for(int i = 0; i < size; i++){
        if(game[i] == 'T'){
            t++;
        }else if(game[i] == 'P'){
            p++;
        }
    }
    if(t > p){
        return -1;
    }else if(p > t){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int play_round;
    scanf("%d", &play_round);
    for(int i = 1; i <= play_round; i++){
        int size;
        scanf("%d", &size);
        char game[size];
        scanf("%s", &game);
        int ct = count(game,size);
        if(ct == 1){
            printf("Pathaan\n");
        }else if(ct == -1){
            printf("Tiger\n");
        }else{
            printf("Draw\n");
        }
    }    

    return 0;
}