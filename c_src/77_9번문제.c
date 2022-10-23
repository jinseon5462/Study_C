#include <stdio.h>

int main(){
    int num[10];
    int i;
    int max = 0;

    for(i = 0; i < 10; i++){
        printf("Input Num >> ");
        scanf("%d", &num[i]);
    }
    for(i = 0; i < 10; i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    printf("최대값 : %d", max);
}