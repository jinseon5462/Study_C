#include <stdio.h>

int main(){
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[5];   // 홀수값
    int C[5];   // 짝수값
    int i;
    int bi, ci = 0;

    // 짝수는 B배열에, 홀수는 C배열에 대입
    for(i = 0; i < 10; i++){
        if(A[i] % 2 == 0){
            C[ci] = A[i];
            ci++;
        }else{
            B[bi] = A[i];
            bi++;
        }
    }
    for(i = 0; i < 5; i++){
        printf("B[%d] : %d\n", i, B[i]);
    }
    printf("\n");

    for(i = 0; i < 5; i++){
        printf("C[%d] : %d\n", i, C[i]);
    }
    return 0;
}