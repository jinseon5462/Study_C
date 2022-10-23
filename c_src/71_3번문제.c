#include <stdio.h>

int main(){
    int num;
    int i;
    int sum = 0;

    printf("숫자를 입력하세요 >> ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        sum += i;
    }
    printf("%d까지의 합은 : %d", num, sum);
    return 0;
}