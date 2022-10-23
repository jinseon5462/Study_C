#include <stdio.h>

int main(){
    // 배열 복사하기
    int A[5] = {1, 2, 3, 4, 5};
    int B[5];
    int i;

    for(i = 0; i < 5; i++){
        B[i] = A[i];
    }
    for(i = 0; i < 5; i++){
        printf("A[%d] : %d\n", i, A[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("B[%d] : %d\n", i, B[i]);
    }

    return 0;
}