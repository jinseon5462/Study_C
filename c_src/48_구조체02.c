#include <stdio.h>

typedef struct AAA{
    int num;
    int age;
    int class;
}Student;

int main(){
    Student student[3];
    Student s1, s2, s3;
    int i;
    Student s4 = {4, 40, 'D'};

    s1.num = 16;
    s1.age = 24;
    s1.class = 'A';

    s2.num = 18;
    s2.age = 26;
    s2.class = 'B';

    s3.num = 20;
    s3.age = 28;
    s3.class = 'C';

    student[0] = s1;
    student[1] = s2;
    student[2] = s3;
    student[3] = s4;


    for(i = 0; i < 4; i++){
        printf("%d %d %c\n", student[i].num, student[i].age, student[i].class);
    }

}