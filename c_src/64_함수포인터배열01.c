#include <stdio.h>

void f1(int *p){
    int A[3];
    int n = 10;
    int m = 100;
    int k = 1000;

    p[0] = n;
    p[1] = m;
    p[2] = k;
}

int main(){
    int A[3];
    int *p;
    f1(A);
    return 0;
}