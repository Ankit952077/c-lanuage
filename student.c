#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("student.txt","w");
     int age;
     char name[100];
     float cgpa; 
     
     printf("student name:=");
     scanf("%s",&name);
     printf("student age:=");
     scanf("%d",&age);
     printf("student cgpa:=");
     scanf("%f",&cgpa);
     
     fprintf(fptr,"student name %s\n",name);
     fprintf(fptr,"student age %d\n",age);
     fprintf(fptr,"student cgpa %f\n",cgpa);
     fclose(fptr);


    return 0;

}