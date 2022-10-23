#include <stdio.h>

int main(){
    int A[3][5];
    int i, j;
    int k = 1;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            A[i][j] = k++;
        }
    }
    for(i = 0; i < 3; i++){ // 배열을 출력하는 반복문
        for(j = 0; j < 5; j++){
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}