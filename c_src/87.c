#include <stdio.h>
#include <string.h>
#include "header/mystring.h"

int main(){
    char str1[10] = "hello";
    char str2[10] = "hello";
    printf("%s\n", str1);

    stringCopy(str1, str2, 10);
    strcpy(str1, str2);
    printf("%s\n", str2);

    return 0;
}