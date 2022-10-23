#include <stdio.h>

int main(){
    int i;
    int num;
    int cnt = 0;

    for(i = 0; i < 10; i++){
        printf("%d) Input Number >> ", i + 1);
        scanf("%d", &num);
        if(num % 2 == 0){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}