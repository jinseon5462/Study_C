#include <stdio.h>

int main(){
    int A[5] = {10, 30, 15, 3, 9};
    int i;
    int index;
    int min = A[0];

    for(i = 0; i < 5; i++){
        if(min > A[i]){
            min = A[i];
            index = i;
        }
    }
    printf("최소값 : %d\n인덱스값 : %d", min, index);
    return 0;
}