#include <stdio.h>
void isAdult(int age){
    if(age < 20){
        printf("미성년자입니다.");
    }else{
        printf("성인입니다.");
    }
}
int main(){
    int age;

    printf("나이를 입력하세요 >> ");
    scanf("%d", &age);
    isAdult(age);
    return 0;
}