#include <stdio.h>

int main(){
    // 25의 근사값은 21입니다.

    int A[5] = {6, 13, 21, 3, 90};
    int B[5];
    int i;
    int temp = B[0];
    int index;

    for(i = 0; i < 5; i++){
        if(25 < A[i]){
            B[i] = A[i] - 25;
        }else{
            B[i] = 25 - A[i];
        }
    }
    for(i = 0; i < 5; i++){
        if(temp > B[i]){
            temp = B[i];
            index = i;
        }
    }
    printf("25의 근사값은 %d입니다.\n", A[2]);
    return 0;
}