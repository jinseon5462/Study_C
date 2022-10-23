#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int *x; // 포인터 변수 선언
    x = &a; // a의 주소값 대입
    x = &b;
    *x = 100;
    a = *x;

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", x);
    printf("%d\n", *x);
}