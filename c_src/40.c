#include <stdio.h>

int main(){
    int A[3] = {10, 20, 30};
    int *p;

    p = &A[0];
    printf("%d", p);
    return 0;
}