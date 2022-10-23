#include <stdio.h>

int main(){
    int seats[5] = {0, };
    int i;
    int cnt = 0;
    int seatNum;

    while(cnt < 5){
        printf("----예약현황----\n");
        printf("----------------\n");
        printf("  1  2  3  4  5\n");
        printf("----------------\n");
        for(i = 0; i < 5; i++){
            printf("%3d", seats[i]);
        }
        printf("\n좌석을 선택하세요 >> ");
        scanf("%d", &seatNum);
        if(seats[seatNum - 1] == 0){
            seats[seatNum - 1] = 1;
            printf("예약완료!\n");
            cnt++;
        }else{
            printf("이미 예약된 좌석입니다.\n");
        }
    }
    printf("감사합니다 매진되었습니다!\n");
    for(i = 0; i < 5; i++){
        printf("%d", seats[i]);
    }
    return 0;
}