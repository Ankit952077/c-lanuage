#include<stdio.h>
void printstring( char array[]){
    for (int i = 0; array[i]!='\0'; i++)
    {
    printf("%c",array[i]);
    }
    printf("\n");
}
int main(){
    char name[50];
    scanf("%s",name);
    printf("your name is :=%s",name);
    
    
        return 0;
}
