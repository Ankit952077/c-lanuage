#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("hello.txt","r");
     int n;
     fscanf(fptr,"%d\n",&n);
     printf("number is :=%d\n",n);
     fscanf(fptr,"%d\n",&n);
     printf("number is :=%d\n",n);
     fscanf(fptr,"%d\n",&n);
     printf("number is :=%d\n",n);
     fscanf(fptr,"%d\n",&n);
     printf("number is :=%d\n",n);
     fscanf(fptr,"%d\n",&n);
     printf("number is :=%d\n",n);
     
  
     fclose(fptr);

    return 0;

}