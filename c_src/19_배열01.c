#include <stdio.h>

int main(){
    int A[3];
    A[0] = 100;
    A[1] = 200;
    A[2] = 300;

    printf("A[0] : %d\n", A[0]);
    printf("A[1] : %d\n", A[1]);
    printf("A[2] : %d\n", A[2]);

    printf("A[2]에 대입할 값 : ");
    scanf("%d", &A[2]);
    printf("A[2]에 입력된 값 : %d\n", A[2]);
    return 0;
}