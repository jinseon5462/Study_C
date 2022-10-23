#include <stdio.h>

int main(){
    // 구구단을 2단만 출력
    int i;

    for(i = 1; i <= 9; i++){
        int k = 2 * i;
        printf("2 X %d = %d\n", i, k);
    }
    return 0;
}