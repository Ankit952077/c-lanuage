#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1={1212,9.2,"ankit"};

    struct student *ptr=&s1;
    printf("student roll no :=%d\n",(*ptr).roll); //  with pointer

    printf("student arrow%d\n",ptr->roll);// arrow oprator



return 0;

}