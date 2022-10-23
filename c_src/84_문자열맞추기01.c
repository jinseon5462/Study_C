#include <stdio.h>
#include <string.h>

int main(){
    char *str = "Hello Java";
    int length = strlen(str);
    printf("length : %d\n", length);

    int i;
    
    int cnt = 0;
    char c;
    int temp[length];

    for(i = 0; i < length; i++){
        temp[i] = '*';
    }
    do{
        for(i = 0; i < length; i++){
            printf("%c", temp[i]);
        }
        printf("\n");
        scanf("%c", &c);
        getchar();
        for(i = 0; i < length; i++){
            if(str[i] == c){
                temp[i] = str[i];
                cnt++;
                printf("맞춘글자수 : %d\n", cnt);
            }
        }
    }while(cnt != 10);
    
    return 0;
}