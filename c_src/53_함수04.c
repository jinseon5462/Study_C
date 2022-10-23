#include <stdio.h>
int isEvenOdd(int n){
    return n % 2;
}
int main(){
    int num, result;

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