#include <stdio.h>
#include "header/mystring.h"

int main(){
    int i;
    char id[5] = "aaaab";
    char pw[5] = "12334";
    char in_id[5];
    char in_pw[5];
    int select;


    printf("----------My Diary----------\n");
    for(i = 0; i < 3; i++){
        printf("아이디를 입력하세요 >> ");
        scanf("%s", &in_id);
        printf("비밀번호를 입력하세요 >> ");
        scanf("%s", &in_pw);
        if(equals(id, in_id) == 1 && equals(pw, in_pw) == 1){
            printf("로그인되었습니다.\n\n");
            do{
                printf("------------Menu------------\n");
                printf("1. Menu01  2. Menu02  3. Menu03  0. Quit\n");
                printf("번호를 선택해주세요 >> ");
                scanf("%d", &select);
                switch(select){
                    case 1:
                        printf("Menu1...\n\n");
                        break;
                    case 2:
                        printf("Menu2...\n\n");
                        break;
                    case 3:
                        printf("Menu3...\n\n");
                        break;
                    case 0:
                        printf("종료합니다...\n\n");
                        i = 4;
                        break;
                    default:
                        printf("입력오류입니다...\n\n");
                }
            }while(select != 0);
        }else{
            printf("누구냐 넌...\n");
        }
    }
    return 0;
}