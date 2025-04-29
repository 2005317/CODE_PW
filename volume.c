#include<stdio.h>
int main(){
    float r;
    printf("Enter the Radius: ");
    scanf("%f", &r);
    float v = 4*3.14*r*r*r/3;
    printf("The Volume of sphere is: %f\n",v);
    return 0;}