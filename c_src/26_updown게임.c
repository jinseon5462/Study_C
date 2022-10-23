#include <stdio.h>

int main(){
    int dap = 23;
    int i;
    int num;

    printf("----up down----\n");
    for(i = 0; i < 10; i++){
        printf("input num >> ");
        scanf("%d", &num);
        if(dap < num){
            printf("작은 수 입력 요함!\n");
        }else if(dap > num){
            printf("큰 수 입력 요함!\n");
        }else{
            printf("%d번째만에 정답!\n", i + 1);
            printf("----The end----\n");
            break;
        }
    }
    return 0;
}