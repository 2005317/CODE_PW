#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time period:");
    scanf("%f",&t);
    float simple_interest = (p*r*t)/100;
    printf("Your simple interest value is:%f\n", simple_interest);
    printf("Your total amount:%f\n",p+simple_interest);
    return 0;
}