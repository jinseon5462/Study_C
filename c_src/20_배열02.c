#include <stdio.h>

int main(){
    // while문 배열
    // A[0]부터 A[99]까지의 값을 출력하시오.
    int A[100];
    int n = 0;

    while(n < 100){
        A[n] = n + 1;
        printf("A[%d] : %d\n", n, A[n]);
        n++;
    }
    return 0;
}