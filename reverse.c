#include<stdio.h>
void reverse(int array[],int n){
  for (int i = 0; i <n/2; i++)
  {
    int firstval=array[i];
    int secondval=array[n-i-1];
    array[i]=secondval;
    array[n-i-1]=firstval;

  }
}
  void printval(int array[],int n){
    for (int i = 0; i <n; i++)
    {
      printf("%d\t",array[i]);
    }
    printf("\n");
  }

  int main(){
    int array[]={1,2,3,4,5,};
    reverse(array,5);
    printval(array,5);

  
  
return 0;

}

