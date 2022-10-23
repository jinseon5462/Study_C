#include <stdio.h>
void printHello(){
    printf("Hello!\n");
}
void printInputData(int num){
    printf("%d", num);
}
int main(){
    printHello();
    printInputData(24);
    return 0;
}