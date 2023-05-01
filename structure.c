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
    return 0;
}