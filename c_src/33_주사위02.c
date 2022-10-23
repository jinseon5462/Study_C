#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int arr[6];
    int dice;
    int i;
    srand(time(NULL));
    for(i =0; i < 6;  i++) {
        dice = rand() % 6 + 1;
        arr[dice - 1] ++;
    }
return 0;
}