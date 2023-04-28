#include<stdio.h>
int countodd(int array[],int n){
  int count=0;
  for (int i = 0; i <=n; i++)
  {
    if (array[i]%2!=0)
    {
      count++;
    }
    
  }
  return count;
}
int main(){
  int array[]={1,2,3,4,5,6,7,8,9};
  printf("%d",countodd(array,9));
  return 0;


}

