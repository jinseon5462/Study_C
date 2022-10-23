#include <stdio.h>

int main(){
    int score;
    int sum = 0;
    double avg;
    
    for(int i = 0; i < 5; i++){
        printf("Input Num >> ");
        scanf("%d", &score);
        sum += score;
    }
    avg = (double)sum / 5;
    printf("총점 : %d\n", sum);
    printf("평균 : %.1f", avg);
    return 0;
}