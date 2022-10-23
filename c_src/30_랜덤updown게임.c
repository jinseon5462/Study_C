#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int dap;
    int i;
    int in;

    srand(time(NULL));
    dap = rand() % 100 + 1;

    for(i = 0; i < 10; i++){
        printf("input num >> ");
        scanf("%d", &in);
        if(dap < in){
            printf("값은 더 작습니다!\n");
        }else if(dap > in){
            printf("값은 더 큽니다!\n");
        }else{
            printf("정답!\n");
            break;
        }
    }    
    return 0;
}