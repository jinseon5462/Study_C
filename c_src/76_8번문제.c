#include <stdio.h>

int main(){
    int num[100];
    int i, cnt;

    for(i = 0; i < 100; i++){
        printf("Input Num >> ");
        scanf("%d", &num[i]);
        if(num[i] == 0){
            break;
        }
    }
    cnt = i;

    for(i = 0; i < cnt; i+=2){
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}