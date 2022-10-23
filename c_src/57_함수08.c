#include <stdio.h>
int isAdult(int age){
    if(age < 20){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int age;
    int result;
    printf("나이를 입력하세요 >> ");
    scanf("%d", &age);
    result = isAdult(age);

    if(result == 0){
        printf("미성년자입니다.");
    }else{
        printf("성인입니다.");
    }

    return 0;
}