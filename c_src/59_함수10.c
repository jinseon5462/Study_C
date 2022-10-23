#include <stdio.h>
void gogodan(int i){
    int j;
    for(j = 1; j < 10; j++){
        printf("%d X %d = %d\n", i, j, i * j);
    }
}
int main(){
    int num;
    printf("숫자를 입력하세요 >> ");
    scanf("%d", &num);
    gogodan(num);
    return 0;
}