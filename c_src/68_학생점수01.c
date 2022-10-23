#include <stdio.h>
#define SCORE   20

typedef struct student{
    int num;
    int answerSheet[5];
    int score;
}STUDENT;

const int correctSheet[5] = {4, 3, 1, 2, 2};    // 정답을 전역변수로 설정

void gradeForStudent(STUDENT *s){
    int score = 0;
    int cnt = 0;
    int sel;
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            if(correctSheet[j] == (s + i) -> answerSheet[j]){
            cnt++;
            }
        }
        (s + i)->score = SCORE * cnt;
        cnt = 0;
    }
}

int main(){

    STUDENT students[3];
    int i, j;

    for(i = 0; i < 3; i++){
        printf("번호 입력 >> ");
        scanf("%d", &(students + i)->num);
        for(j = 0; j < 5; j++){
            printf("%d번 문항의 학생 답을 입력하세요.\n", j + 1);
            scanf("%d", &(students + i)->answerSheet[j]);
        }
    }

    gradeForStudent(students);

    for(i = 0; i < 3; i++){
        printf("%d : %d점\n", students[i].num, students[i].score);
    }

    return 0;
}