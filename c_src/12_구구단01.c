#include <stdio.h>

int main(){
    // 구구단 세로출력
    int i, j;

    for(i = 2; i <= 9; i++){    // 곱하는 수(2 ~ 9)
        printf("%d단\n", i);    // 몇단인지 출력
        for(j = 1; j <= 9; j++){    // 곱해지는 수(1 ~ 9)
            printf("%d X %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}