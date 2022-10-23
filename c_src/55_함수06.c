#include <stdio.h>
int calcPrice(int age){
    if(age < 20){
        return 500;
    }else{
        return 1000;
    }
}
int calcChange(int money){
    int change;
    if(money >= 1000){
        change = money - 1000;
    }
    return change;
}
int main(){
    int age;
    int price;
    int money;
    int change;

    printf("나이를 입력하세요 >> ");
    scanf("%d", &age);
    price = calcPrice(age);
    printf("요금은 %d원 입니다.\n", price);
    printf("지불하실 금액을 입력하세요 >> ");
    scanf("%d", &money);
    change = calcChange(money);

    if(money >= 1000){
        printf("거스름돈은 %d원 입니다.", change);
    }else{
        printf("금액이 부족합니다.");
    }
    return 0;
}