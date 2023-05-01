#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    float cgpa;

};
int main(){
    struct student s1;
    s1.roll=1566;
    s1.cgpa=9.2;
    strcpy(s1.name,"ankit");
    printf("student name:=%s\n",s1.name);
    printf("student roll:=%d\n",s1.roll);
    printf("student cgpa:=%f\n",s1.cgpa);

    struct student s2;
    s2.cgpa=9.3;
    s2.roll=1672;
    strcpy(s2.name,"baghel");
     printf("student name:=%s\n",s2.name);
    printf("student roll:=%d\n",s2.roll);
    printf("student cgpa:=%f\n",s2.cgpa);

    struct student s3;
    s3.cgpa=9.4;
    s3.roll=12131;
    strcpy(s3.name,"danav");
     printf("student name:=%s\n",s3.name);
    printf("student roll:=%d\n",s3.roll);
    printf("student cgpa:=%f\n",s3.cgpa);



    return 0;
}