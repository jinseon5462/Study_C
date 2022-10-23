#include <stdio.h>

typedef struct student{
    int n;
    int answer[5];
    int score;
}STUDENT;

int main(){
    int dap[5] = {4, 3, 1, 2, 2};
    int cnt = 0;
    int i;
    STUDENT s1;

    for(i = 0; i < 5; i++){
        printf("%d번문제의 답을 입력하세요 >> ", i + 1);
        scanf("%d", &s1.answer[i]);
    }
    for(i = 0; i < 5; i++){
        if(dap[i] == s1.answer[i]){
            cnt++;
        }
    }
    printf("정수는 %d점입니다.", cnt * 20);
    return 0;
}