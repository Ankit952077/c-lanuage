#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
struct student ece[100];
ece[0].roll=123113;
ece[0].cgpa=9.3;
strcpy(ece[0].name,"ankit");

printf("student name=:%s\n",ece[0].name);
printf("student roll=:%d\n",ece[0].roll);
printf("student cgpa=:%f\n",ece[0].cgpa);
return 0;

}