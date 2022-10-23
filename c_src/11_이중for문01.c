#include <stdio.h>

int main(){
    // 이중for문
    int i, j;

    for(i = 0; i < 3; i++){
        printf("바깥쪽 for문\n");
        for(j = 0; j < 5; j++){
            printf("\t안쪽 for문\n");
        }
    }
    printf("\n");
    return 0;
}