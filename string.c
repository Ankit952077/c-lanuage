#include<stdio.h>
void printstring( char array[]){
    for (int i = 0; array[i]!='\0'; i++)
    {
    printf("%c",array[i]);
    }
    printf("\n");
}
int main(){
    char fristname[]="Ankit";
    char lastname[]="Baghel";

    printstring(fristname);
    printstring(lastname);
    return 0;
}
