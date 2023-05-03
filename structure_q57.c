#include<stdio.h>
#include<string.h>


struct address {
    int house_no;
    int block;
    char city[1000];
    char state[1000];
};
int main(){
    struct address adds[5];
    
    printf("Enter info for person 1:=\n");
    scanf("%d",&adds[0].house_no);// Input 
    scanf("%d",&adds[0].block);// Input 
    scanf("%s",&adds[0].city);// Input 
    scanf("%s",&adds[0].state);// Input 

    printf("Enter info for person 2:=\n");
    scanf("%d",&adds[1].house_no);
    scanf("%d",&adds[1].block);
    scanf("%s",&adds[1].city);
    scanf("%s",&adds[1].state);

    printf("Enter info for person 3:=\n");
    scanf("%d",&adds[2].house_no);
    scanf("%d",&adds[2].block);
    scanf("%s",&adds[2].city);
    scanf("%s",&adds[2].state);

    printf("Enter info for person 4:=\n");
    scanf("%d",&adds[3].house_no);
    scanf("%d",&adds[3].block);
    scanf("%s",&adds[3].city);
    scanf("%s",&adds[3].state);

   printf("Enter info for person 5:=\n");
    scanf("%d",&adds[4].house_no);
    scanf("%d",&adds[4].block);
    scanf("%s",&adds[4].city);
    scanf("%s",&adds[4].state);

    prinfinfo(adds[0]);  
    prinfinfo(adds[1]); 
    prinfinfo(adds[2]); 
    prinfinfo(adds[3]); 
    prinfinfo(adds[4]); 

return 0;

}
void prinfinfo(struct address add){
    printf("address is:=%d,%d,%s,%s\n",add.house_no,add.block,add.city,add.state);
}

