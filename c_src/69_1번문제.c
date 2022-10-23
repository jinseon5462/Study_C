#include <stdio.h>

int main(){
    int num;

    do{
        printf("\n1.입력하기\n");
        printf("2.출력하기\n");
        printf("3.삭제하기\n");
        printf("4.끝내기\n");
        printf("작업할 번호를 선택하세요 >> ");
        scanf("%d", &num);

        switch(num){
            case 1:
                printf("--입력하기를 선택했습니다.\n");
                break;
            case 2:
                printf("--출력하기를 선택했습니다.\n");
                break;
            case 3:
                printf("--삭제하기를 선택했습니다.\n");
                break;
            case 4:
                printf("--끝내기를 선택했습니다.\n");
                break;
            defaul:
                printf("error");
        }
    }while(num != 4);
    return 0;
}