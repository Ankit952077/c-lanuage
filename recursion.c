#include<stdio.h>

int sum(int num){
    if (num==1)
    {
        return 1;
    }
    
    int sumNM1=sum(num-1);
    int sumNM=sumNM1+num;
    
}
int main(){
    printf("sum is :=%d",sum(10));
    return 0;

}