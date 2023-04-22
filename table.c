#include<stdio.h>
void table(int n){
 for (int i = 1; i <=10; i++){
     
   printf("%d\n",n*i);
}
}
int main(){
    int n;
printf("enter num=:");
scanf("%d",&n);
table(n);

return 0;
}