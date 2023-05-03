#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};
void printinfo(struct student s1);

int main(){
    struct student s1={1212,9.2,"ankit"};
    printinfo(s1);
    
 
return 0;

}

void printinfo(struct student s1){
    printf("student info\n");
    printf("student roll no %d\n",s1.roll);
        printf("student cgpa %f\n",s1.cgpa);
            printf("student name %s\n",s1.name);


}