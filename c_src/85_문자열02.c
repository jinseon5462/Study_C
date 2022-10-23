#include <stdio.h>

int main(){
    char str[10];
    fgets(str,sizeof(str),stdin);
    fputs(str,stdout);
    printf("%s", str);
    return 0;
}