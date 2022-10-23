#include <stdio.h>

int main(){
    char ch = 'A';
    int i;

    for(i = 0; i < 26; i++){    // A ~ Z까지 출력하는 반복문
        printf("%c", ch + i);
    }
    return 0;
}