#include<stdio.h>
void printHW(int count){
    if (count==0)
    {
        return ;
    }
    
    printf("hello world\n");
    printHW(count-1);
}
int main(){
    printHW(3);
    return 0;
    
}