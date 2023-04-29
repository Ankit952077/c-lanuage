#include<stdio.h>
void printstring( char array[]){
    for (int i = 0; array[i]!='\0'; i++)
    {
    printf("%c",array[i]);
    }
    printf("\n");
}
int main(){
    char str[100];
    gets(str);
    puts(str);
            return 0;
}
