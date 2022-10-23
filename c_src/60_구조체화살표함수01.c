#include <stdio.h>

typedef struct A{
    int field;
    int age;
}A;

int main(){
    A a;
    a.field = 19;
    a.age = 24;
    A *p;
    p = &a;
    p -> field = 20;
    printf("%d", a.field);

    return 0;
}