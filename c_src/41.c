#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int i, j;
    int rd;
    int lotto[6] = {0, };


    for(i = 0; i < 6; i++){
        rd = rand() % 45 + 1;
        lotto[i] = rd;
        for(j = 0; j < i; j++){
            if(lotto[i] == lotto[j]){
                i--;
                break;
            }
        }
    }
    for(i = 0; i < 6; i++){
        printf("%3d", lotto[i]);
    }
    return 0;
}