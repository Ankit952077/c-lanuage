#include<stdio.h>

int fib(int num){

if (num==0)
{
   return 0;
}
if (num==1)
{
    return 1;
}
int fibNM1=fib(num-1);
int fibNM2=fib(num-2);
int fibNM=fibNM1+fibNM2;
}
int main(){
    printf("fibnocci num is=:%d",fib(6));
    return 0;
    
}