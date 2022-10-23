#include <stdio.h>

int main(){
    int A[5] = {6, 13, 21, 3, 99};
    int i;
    int max = A[0];
    int min = A[0];

    for(i = 0; i < 5; i++){
        if(max < A[i]){
            max = A[i];
        }
    }
    printf("최대값은 : %d입니다.\n", max);

    for(i = 0; i < 5; i++){
        if(min > A[i]){
            min = A[i];
        }
    }
    printf("최소값은 : %d입니다.\n", min);
    return 0;
}