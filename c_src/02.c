#include <stdio.h>

int main(){
    int n = 0;
    
    do{ // hello!를 10번 반복
        printf("hello!\n"); // hello!를 출력한다.
        n++;    // n의값을 1증가시킨다.
    }while(n < 10);
    return 0;
}