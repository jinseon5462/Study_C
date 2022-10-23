#include <stdio.h>

int main(){
    // 계산기 게임

    int n1, n2, select, result;

    printf("------계산기 게임------\n");
    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &n1);
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &n2);
    printf("1.덧셈   2.뺄셈   3.곱셈   4.나눗셈\n");
    printf("수행할 연산을 선택하세요 : ");
    scanf("%d", &select);

    switch(select){
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            result = n1 / n2;
            break;
        default:
            printf("error");
    }
    printf("연산의 결과는 : %d\n", result);
    printf("------The end------");
/*
    printf("----계산기 ver1.0----\n");
    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &n1);
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &n2);
    printf("1.덧셈  2.뺄셈  3.곱셈  4.나눗셈\n");
    printf("수행할 연산을 선택하세요 : ");
    scanf("%d", &select);

    switch(select){
        case 1:
            result = n1 + n2;
            break;
        case 2:
            result = n1 - n2;
            break;
        case 3:
            result = n1 * n2;
            break;
        case 4:
            result = n1 / n2;
            break;
        default:
            printf("error");
    }
    printf("연산의 수행결과는 : %d\n", result);
    printf("----end----");
*/
    
    
    return 0;
}