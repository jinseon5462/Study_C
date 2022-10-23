#include <stdio.h>

int main(){
    int score = 55;

    switch(score/10){
        case 10: case 9: case 8: case 7: case 6:
            printf("%d점은 합격입니다.", score);
            break;
        default:
            printf("%d점은 불합격입니다.", score);
    }
    return 0;
}