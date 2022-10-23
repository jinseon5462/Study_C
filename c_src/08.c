#include <stdio.h>

int main(){
    //성인용품 사이트 
    
    int age = 17;
    int year = 20 - age;

    if(age > 20){
        printf("반갑습니다.\n");
    }else{
        printf("%d년 있다와.\n", year);
    }
    
    return 0;
}