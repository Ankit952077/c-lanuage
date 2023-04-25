#include<stdio.h>
int fact(int num){
      if (num==0)
    {
        return 1;

    }
    int factNM1=fact(num-1);
    int factNM=factNM1*num;
  
    
}
int main(){
    printf("factorial is :=%d\n",fact(5));
    return 0;

}