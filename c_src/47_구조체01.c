#include <stdio.h>
typedef struct PERSON{
    char c;
    int n;
    int m;
}P;
int main(){
   P p1 = {'A', 10, 20};
   P p2 = {'B', 30, 40};
   printf("%c %d %d\n", p1.c, p1.n, p1.m);
   printf("%c %d %d\n", p2.c, p2.n, p2.m);
    return 0;
}