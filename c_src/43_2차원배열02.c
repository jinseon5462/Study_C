#include <stdio.h>

int main(){
    int A[5][5];
    int i, j;
    int k = 1;

    for(i = 0; i < 5; i++){
        if(i % 2 == 0){
            for(j = 0; j < 5; j++){
                A[i][j] = k++;
            }
        }else{
            for(j = 0; j < 5; j++){
                A[i][4 - j] = k++;
            }
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}