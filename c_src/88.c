#include <stdio.h>
#include <string.h>
#include "header/mystring.h"

int main(){
    char str1[10] = "hello";
    char str2[10] = "hello";
    printf("%s\n", str1);
    int result = equals(str1, str2);

    if(result == 1){
        printf("같다 : %d\n", result);
    }else{
        printf("다르다 : %d\n", result);
    }
    return 0;
}