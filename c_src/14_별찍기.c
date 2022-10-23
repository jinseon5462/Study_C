#include <stdio.h>

int main(){
    // 직사각형 5줄, 별 5개
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // 직각삼각형 5줄
    for(i = 0; i < 5; i++){
        for(j = 0; j <= i; j++){    //줄수와 같이 별 출력
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // 직각삼각형(역방향)
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5 - i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // 피라미드
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3 - i; j++){
            printf(" ");
        }
        for(j = 0; j < 2 * i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");

    // 역피라미드
    
    
    return 0;
}