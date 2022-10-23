#include <stdio.h>

int main(){
    int A[5][5];
    int i, j;
    int k = 1;
    int x, y;

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
            if(A[i][j] == 17){
                x = i;
                y = j;
                break;
            }
        }
        if(A[i][j] == 17){
            break;
        }
    }
    printf("17의 위치는 A[%d][%d]입니다.\n", x, y);
    return 0;
}