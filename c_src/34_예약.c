#include <stdio.h>

int main(){
    int i;
    int cnt = 0;
    int seatNum;
    int seats[5] = {0, };

    while(cnt < 5){
        printf("\n-----예약현황-----\n");
        printf("==================\n");
        printf("  1  2  3  4  5\n");
        printf("------------------\n");
        for(i = 0; i < 5; i++){
            printf("%3d", seats[i]);
        }
        printf("\n\n좌석을 선택하세요 >> ");
        scanf("%d", &seatNum);
        if(seats[seatNum - 1] == 0){
            seats[seatNum - 1] = 1;
            printf("예약되었습니다!\n");
            cnt++;
        }else{
            printf("이미 예약되었습니다.\n");
        }
    }
    printf("\nThank you!! 매진되었습니다.\n");
    for(i = 0; i < 5; i++){
        printf("%d", seats[i]);
    }
    return 0;
}