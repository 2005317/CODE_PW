#include<stdio.h>
int main(){
    float x;
    int y;
    printf("write a number:");
    scanf("%f",&x);
    y = x;
    float z;
    z = x-y ;
    printf("fractional part of %f is %f\n",x,z);
    return 0;
}