#include <stdio.h>

int main(){
    int n = 1;
    int select;
    
    while(n){
        printf("----------메뉴 선택----------\n");
        printf("1.Menu1\t2.Menu2\t3.end\n");
        printf("Input Menu >> ");
        scanf("%d", &select);

        switch(select){
            case 1:
                printf("Menu1 실행...\n");
                break;
            case 2:
                printf("Menu2 실행...\n");
                break;
            case 3:
                printf("프로그램 종료...\n");
                break;
            default:
                printf("error!");
        }
    }
    return 0;
}