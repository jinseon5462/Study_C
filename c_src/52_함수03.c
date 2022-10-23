#include <stdio.h>
int isEvenOdd(int num){
    if(num % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int num;
    int result;

    printf("숫자를 입력하세요 >> ");
    scanf("%d", &num);
    result = isEvenOdd(num);
    printf("%d\n", result);
    if(result == 0){
        printf("짝수입니다.");
    }else{
        printf("홀수입니다.");
    }
    return 0;
}