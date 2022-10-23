#include <stdio.h>
#include "header/mystring.h"

void showMenu(){
   printf("\n----Menu----\n");
   printf("1. menu01 \t 2. menu02 \t 3. menu03\t 0. quit\n\n");
}

int loginCheck(char *id, char *pw){
   char savedId[10] = "admin";
   char savedPw[10] = "1234";
   int result;
   
   int r1 = strComp(id, savedId);
   int r2 = strComp(pw, savedPw);
   
   if(r1 == 1 && r2 == 1){
      result = 1;
   }else{
      result = 0;
   }
      
   return result;
}

int main(){
   
   char id[10];
   char pw[10];
   int cnt = 0;
   int sel;
   int flag = 0;
   int result;
   
   printf("\n----My Diary----\n");
   do{
      printf("Input id >> ");
      scanf("%s", &id);
   
      printf("Input pw >> ");
      scanf("%s", &pw);
      result = loginCheck(id, pw);
      cnt++;
      if(cnt >= 3){
         printf("3번 기회 끝! 누구냐 넌?\n");
         return;
      }
      
   }while(result != 1);
   
   printf("Welcome %s!\n\n", id);
   
   while(1){
      
      showMenu();
      printf("선택 >> ");
      scanf("%d", &sel);
      
      switch(sel){
         case 1: printf("menu1....\n");break;
         case 2: printf("menu2....\n");break;
         case 3: printf("menu3....\n");break;
         case 0: 
            printf("quit....\n");
            flag = 1; 
            break;
         default:
            printf("wrong choice!!\n");break;
            
      }
      if(flag == 1){
         break;
      }
   }
   printf("End------\n");
   return 0;
}
