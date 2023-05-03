#include<stdio.h>
#include<string.h>

struct complex{
    int real;
    int img;

};
int main(){
    struct complex number1={2,3};
     struct complex *ptr=&number1;

    printf("real number is :=%d\n",ptr->real);
    printf("img number is :=%d\n",ptr->img);
    return 0;
    

}  