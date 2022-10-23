#include <stdio.h>

int main(){
    // for문으로 짝수 인덱스에는 짝수값 대입, 홀수인덱스에는 홀수값 대입

    int A[100];

    for(int i = 0; i < 100; i++){
        if(i % 2 == 0){
            A[i] = i;
            printf("A[%d] : %d\n", i, A[i]);
        }else{
            A[i] = i;
            printf("A[%d] : %d\n", i, A[i]);
        }
    }
    return 0;
}