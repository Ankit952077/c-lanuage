#include<stdio.h>

float convertotemp( float clesius){
    float far=clesius*(9.0/5.0)+32;
    return far;
}
int main(){
    
    printf("far is %f",convertotemp(37));
    return 0;

}