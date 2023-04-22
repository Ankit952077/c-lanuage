#include<stdio.h>

int sum(int a,int b){
    return a+b;

}
int main(){
    int a,b;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b");
    scanf("%d",&b);

 int s=a+b;
 printf("sum is %d",s);
 return 0;


}