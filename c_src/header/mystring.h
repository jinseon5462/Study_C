void stringCopy(char *str1, char *str2, int length){
    for(int i = 0; i < length; i++){
        str2[i] = str1[i];
    }
}

void stringCopy2(char *str1, char *str2){
    int i;
    for(i = 0; ; i++){  // 무한루프중 NULL 만나면 반복 종료
        str2[i] = str1[i];
        if(str1[i] == '\0'){
            break;
        }
    }
}

int equals(char *str1, char *str2){
    int i;
    int result;

    for(i = 0; str1[i] != '\0'; i++){   // str[i]가 NULL문자가 아닌동안 반복
        if(str1[i] == str2[i]){
            result = 1;
        }else{
            result = 0;
        }
    }
    return result;
}