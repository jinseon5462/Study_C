#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int A[6] = {0, };
    srand(time(NULL));
    int i, j;

    for(i = 0; i < 100; i++){
        j = rand() % 6 + 1;
        if(j == 1){
            A[0]++;
        }else if(j == 2){
            A[1]++;
        }else if(j == 3){
            A[2]++;
        }else if(j == 4){
            A[3]++;
        }else if(j == 5){
            A[4]++;
        }else if(j == 6){
            A[5]++;
        }
    }
    for(int i = 0; i < 100; i++){
        j = rand() % 6 + 1;
        A[j - 1]++;
    }
    for(j = 0; j < 6; j++){
        printf("주사위 %d는 %d번 나왔습니다.\n", j, A[j]);
    }
    return 0;
}