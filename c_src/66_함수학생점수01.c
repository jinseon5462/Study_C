#include <stdio.h>

int dap(int *s1){
    int dap[5] = {4, 3, 1, 2, 2};
    int i;
    int cnt = 0;

    for(i = 0; i < 5; i++){
        if(dap[i] == s1[i]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int s1[5] = {4, 3, 2, 2, 2};
    int result;

    dap(s1);
    result = dap(s1);
    printf("%d", result * 20);
    
    return 0;
}