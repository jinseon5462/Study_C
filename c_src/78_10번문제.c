#include <stdio.h>

int main(){

    int i, j;
    int score[4][4] = {0, };
    for(i = 0; i < 3; i++){
        printf("%d번째 학생의 점수 >>\n", i + 1);
        for(j = 0; j < 3; j++){
            scanf("%d", &score[i][j]);
            score[i][3] += score[i][j]; // 3열 총점
            score[3][j] += score[i][j]; // 3행 총점
            score[3][3] += score[i][j]; //3열 3행총점
        }
    }
    printf("       국어 영어 수학 총점\n");
    for(i = 0; i < 4; i++){
        if(i < 3){
            printf(" %d번", i + 1);
        }else{
            printf("합계");
        }
        for(j = 0; j < 4; j++){
            printf("%5d", score[i][j]);
        }
        printf("\n");
    }
    return 0;
}