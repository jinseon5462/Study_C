#include <stdio.h>
int add(int n1, int n2){
    return n1 + n2;
}
int min(int n1, int n2){
    return n1 - n2;
}
int times(int n1, int n2){
    return n1 * n2;
}
int divide(int n1, int n2){
    return n1 / n2;
}

void printAdd(int n1, int n2){
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
}
void printMin(int n1, int n2){
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
}
void printTimes(int n1, int n2){
    printf("%d X %d = %d\n", n1, n2, n1 * n2);
}
void printDivide(int n1, int n2){
    printf("%d ÷ %d = %d\n", n1, n2, n1 / n2);
}
int main(){
    int result;
    
    result = add(4, 6);
    printf("A + B = %d\n", result);

    result = min(6, 1);
    printf("A - B = %d\n", result);

    result = times(4, 9);
    printf("A X B = %d\n", result);

    result = divide(9, 3);
    printf("A ÷ B = %d\n", result);

    printAdd(5, 6);
    printMin(6, 2);
    printTimes(8, 3);
    printDivide(6, 2);

    return 0;

}