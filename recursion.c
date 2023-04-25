#include<stdio.h>
int calculateper(int hindi,int science,int art){
    return (hindi+science+art)/3;
}
int main(){
    int hi=98;
    int ar=90;
    int sci=98;
    printf(" percent is :=%d",calculateper(hi,ar,sci));
    return 0;

}