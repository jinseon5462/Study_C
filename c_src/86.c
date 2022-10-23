#include <stdio.h>
#include <string.h>
#include "header/mystring.h"    // 헤더파일

int main(){
    char str1[10] = "helloJava";
    char str2[10];
    printf("%s\n", str1);

    stringCopy2(str1, str2);    // 함수를 호출
    printf("%s\n", str2);

    return 0;
}