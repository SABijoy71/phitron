#include <stdio.h>
int main()
{

    int ary[4] = {1, 2, 3, 5};

    int *p = ary + 9;
    
    *p = 10;

    for(int i = 0; i < 10; i++){
        printf("%d\n", ary[i]);
    }

}