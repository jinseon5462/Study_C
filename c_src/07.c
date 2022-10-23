#include <stdio.h>

int main(){
    int age = 24;
    float height = 170.6;
    char gender = 'F';
    float weight = 80;
    float bmi = height - 100;

    printf("내 이름은 홍길동.\n");
    printf("나이는 %d살이고.\n", age);
    printf("키는 %.1f입니다.\n", height);
    printf("성별은 %c입니다.\n", gender);
    printf("\n");

    if(gender == 'M'){
        printf("내 이름은 홍길동.\n나이는 %d살이고\n키는 %.1f입니다.\n성별은%c입니다.\n", age, height, gender);
        printf("\n");
    }else{
        printf("내 이름은 홍길순.\n나이는 %d살이고\n키는 %.1f입니다.\n성별은%c입니다.\n", age, height, gender);
        printf("\n");
    }

    if(bmi < weight){
        printf("과체중입니다. 살좀 빼세요.\n");
    }else if(bmi > weight){
        printf("저체중입니다. 살좀 찌우세요.\n");
    }else{
        printf("정상입니다.\n");
    }
/*
    if(height - 100 < weight){
        printf("과체중입니다. 살좀 빼세요.\n");
    }else if(height - 100 > weight){
        printf("저체중입니다. 살좀 찌우세요.\n");
    }else{
        printf("정상입니다.\n");
    }
*/
    return 0;
}