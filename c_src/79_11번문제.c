#include <stdio.h>

double getAvg(int kor, int eng, int math){
    double avg = (double)(kor + eng + math) / 3;
    return avg;
}

double getAvg2(int *scores){
    double avg = (double)(scores[0] + scores[1] + scores[2]) / 3;
    return avg;
}

int main(){
    //int kor, eng, math;
    int score[3];
    double avg;

    printf("과목의 점수를 입력하세요 >> ");
    //scanf("%d %d %d", &kor, &eng, &math);
    scanf("%d %d %d", &score[0], &score[1], &score[2]);
    //avg = getAvg(kor, eng, math);
    avg = getAvg2(score);
    printf("평균 : %.2f", avg);
    return 0;
}