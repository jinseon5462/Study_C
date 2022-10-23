#include <stdio.h>

int main(){
    // 구구단 가로출력
    int i, j;

    for(j = 1; j <= 9; j++){
        for(i = 2; i <= 9; i++){
            printf("%d X %d = %d\t", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}