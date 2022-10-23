#include <stdio.h>

int main(){
    int a[3] = {1, 2, 3};
    int *p;
    p = a;

    printf("%d\n", a[0]);
    printf("%d\n", p[0]);
    printf("%d\n", *p);
    printf("%d\n", *(p + 0));
    printf("%d\n", *(p + 2));
    return 0;
}