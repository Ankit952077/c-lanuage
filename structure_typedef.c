#include<stdio.h>
#include<string.h>

 typedef struct computerstudentinfo{
    int roll;
    float cgpa;
    char name[100];

} csi;
int main(){
    csi s1;
    s1.roll=2121;
    s1.cgpa=9.2;
    strcpy(s1.name,"ankit");
    printf("student roll %d\n",s1.roll);
    printf("student cgpa%f\n",s1.cgpa);
    printf("student name%s\n",s1.name);

return 0;

}
