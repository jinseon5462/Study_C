#include <stdio.h>

int main(){
    int A[5] = {1, 2, 3, 4, 5};
    int B[5];
    int C[10];
    int i, j, k = 0;
    int cnt = 0;

    for(int i = 0; i < 5; i++){ // A배열의 값을 B배열에 복사, A배열의 값을 C배열에 복사, B배열의 값을 C배열에 복사
        B[i] = A[i];
        C[i] = A[i];
        C[i + 5] = B[i];
        printf("B[%d] : %d\n", i, B[i]);    // B배열의 값을 출력
    }
    for(j = 0; j < 10; j++){
        printf("C[%d] : %d\n", j, C[j]);    // C배열의 값을 출력
    }

    // 위의 배열에서 짝수의 갯수를 출력하라
    for(k = 0; k < 10; k++){
        if(C[k] % 2 == 0){
            printf("C[%d] : %d\n", k, C[k]);
            cnt++;
        }
    }
    printf("짝수의 개수는 : %d", cnt);
    return 0;
}