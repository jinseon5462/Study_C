#include <stdio.h>
#include <string.h>

int main(){
    // 문자배열
    char word[10] = {'a', 'p', 'p', 'l', 'e'};
    printf("%c\n", word[4]);
    printf("%s\n", word);

    // 문자열
    char *str = "Hello Java";
    int length = strlen(str);
    printf("length : %d\n", length);
    printf("%c\n", str[6]);
    printf("%s\n", str);
    
    return 0;
}