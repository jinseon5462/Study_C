#include <stdio.h>
void linePrint(int num, char ch){
    for(int i = 0; i < num; i++){
        printf("%c", ch);
    }
}
int main(){

    char ch;
    int num;
    printf("====고객관리 프로그램 ver1.0====\n");
    printf("기호를 입력하세요 >> ");
    scanf("%c", &ch);
    printf("숫자를 입력하세요 >> ");
    scanf("%d", &num);
    linePrint(num, ch);

    return 0;
}