#include<stdio.h>
#include<string.h>


    
 typedef struct bankaccount{
    int accountno;
    char name[100];

}acc;
int main(){
    acc acc1={123,"ankit"};
    acc acc2={1234,"kumar"};
    acc acc3={12345,"danav"};

    printf("account no %d\n",acc1.accountno);
    printf(" name %s\n",acc1.name);
    printf("account name %s\n",acc3.name);

    return 0;
    
}