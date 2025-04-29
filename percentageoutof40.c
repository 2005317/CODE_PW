#include<stdio.h>
int main(){
    float x1,x2,x3,x4,x5,x6;//these are marks
    printf("Enter the marks in Maths:");
    scanf("%f",&x1);
    printf("Enter the marks in Social Science:");
    scanf("%f",&x2);
    printf("Enter the marks in Computer:");
    scanf("%f",&x3);
    printf("Enter the marks in Science:");
    scanf("%f",&x4);
    printf("Enter the marks in English Literature:");
    scanf("%f",&x5);
    printf("Enter the marks in English Grammar:");
    scanf("%f",&x6);
    float percentage = (x1+x2+x3+x4+x5+x6)/6;//percentage formula
    printf("Your percentage is: %f",percentage);
    return 0;
}