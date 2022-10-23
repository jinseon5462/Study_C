#include <stdio.h>
/*
두개의 문자열을 결합하는 함수를 만든다.

메인함수에서 함수에 두개의 문자열을 보내준다
함수에서 두개의 문자열을 
*/
void addString(char *s1, char *s2, char *result){
    int i, j;
    
    for(i = 0; i < 10; i++){
        result[i] = s1[i];
        if(result[i] == '\0'){
            break;
        }
    }
    for(j = 0; j < 10; j++){
        result[i + j] = s2[j];
        if(result[j] == '\0'){
            break;
        }
    }
}

int main(){
    char s1[8] = "Holly ";
    char s2[8] = "Molly!";
    char result[15];
    
    addString(s1, s2, result);
    printf("%s\n", result);

    return 0;
}