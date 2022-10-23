#include <stdio.h>

int main(){
    // for문으로 배열에 값 넣고 출력하기

    int A[100];

    for(int i = 0; i < 100; i++){
        A[i] = i + 1;
        printf("A[%d] : %d\n", i, A[i]);
    }
    return 0;
}