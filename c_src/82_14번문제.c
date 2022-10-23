#include <stdio.h>

void printHello(int n){
    printf("hello\n");
    if(n < 10){
        printHello(n + 1);
    }
}
int main(){
    printHello(1);
}