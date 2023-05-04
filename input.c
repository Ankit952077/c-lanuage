#include<stdio.h>
int main(){
    FILE *fptr;
    fptr =fopen("hello.txt","r");
    
    int ch;
    fscanf(fptr,"%d",&ch);
    printf("char==%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("char==%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("char==%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("char==%d\n",ch);
     fscanf(fptr,"%d",&ch);
    printf("char==%d\n",ch);
    




       fclose(fptr);

    return 0;

}