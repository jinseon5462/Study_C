#include <stdio.h>

int main(){
    int A[5] = {10, 5, 8, 1, 6};
    int i, j, k;
    int temp;

    for(i = 0; i < 4; i++){
        for(j = i + 1; j < 5; j++){
            if(A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for(k = 0; k < 5; k++){
        printf("%4d", A[k]);
    }
    return 0;
}