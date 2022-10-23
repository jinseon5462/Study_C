#include <stdio.h>

int main(){
    int A[4];
    int mok, nmg;
    int num = 12;
    int i = 3;

    do{
        mok = num / 2;
        nmg = num % 2;
        A[i] = nmg;
        i--;
        num = mok;
    }while(mok > 0);
    for(int k = 0; k < 4; k++){
        printf("%d", A[k]);
    }
    return 0;
}