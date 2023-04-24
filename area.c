#include<stdio.h>
#include<math.h>

float areaofasqure(float num){
    return(num*num);
}
float areaofacircle(float r){
    return(3.14*r*r);
}
float areaofarectangle(float a,float b){
    return(a*b);
}
int main(){
    float num=10;
    float r=12;
    float a=10;
    float b=12;
   printf("area of a squre:=%f\n",areaofasqure(num));
   printf("area of a circle:=%f\n",areaofacircle(r));
   printf(" area of a rectangle :=%f\n",areaofarectangle(a,b));
    
 return 0;
}