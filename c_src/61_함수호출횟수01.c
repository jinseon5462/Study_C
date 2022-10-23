#include <stdio.h>

int f(){
    static int cnt;
    cnt++;
    return cnt;
}
int main(){
    int i;
    int result;

    for(i = 0; i < 5; i++){
        result = f();
        printf("함수 호출 횟수 : %d\n", result);
    }
    return 0;
}