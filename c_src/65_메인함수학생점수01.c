#include <stdio.h>

int main(){
    int dap[5] = {4, 3, 1, 2, 2};
    int s1[5] = {2, 2, 2, 2, 2};
    int s2[5] = {2, 3, 1, 4, 2};

    int cnt = 0;
    int score;
    int i;

    for(i = 0; i < 5; i++){
        if(dap[i] == s1[i]){
            cnt++;
        }
    }
    score = cnt * 20;
    printf("%d\n", score);

    return 0;
}