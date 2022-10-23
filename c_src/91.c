#include <stdio.h>
char charAt(char *str, int num){
    char ch;
    ch = str[num];
    return ch;
}

int main(){
    char *str = "hello";
    int inputNum;
    char result;

    printf("숫자를 입력하세요 >> ");
    scanf("%d", &inputNum);
    
    charAt(str, inputNum);
    result = charAt(str, inputNum);

    printf("%c\n", result);

    /*
    처리 절차

    1. char형 배열 str선언과 동시에 초기화
    2. 입력받을 정수형 변수 inputNum, 반환값을 저장하는 문자형 변수 result 선언
    3. scanf("%d", &inputNum)함수를 사용해 정수형 자료를 입력받는다.
    4. charAt(str, inputNum)함수를 호출해 값을 전달한다.
    5. 매개변수로 값을 받는다.
    6. charAt()함수에서 반환되는 값을 저장할 char형 변수 ch를 선언.
    7. 변수 ch에 전달받은 매개변수의 A배열의 n번째 인덱스의 값을 ch에 대입한다.
    8. return ch를 통해 값을 반환하고 그 값이 char형이므로 반환형 타입을 char로 설정해준다.
    9. main()함수로 돌아와서 호출함 함수 charAt의 값을 반환값을 저장하는 문자형 변수 result에 대입한다.
    10. result에 대입된 값을 출력한다.
    */
    return 0;
}