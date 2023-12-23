#include<stdio.h>
#include<string.h>

int is_palindrome(char word[]){

    char new[strlen(word)];

    strcpy(new, word);
    strrev(new);

    return strcmp(new,word);
    
}

int main(){

    char word[1000];
    scanf("%s", word);

    if(is_palindrome(word) == 0){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }

    return 0;
}