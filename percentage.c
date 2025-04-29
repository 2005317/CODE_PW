#include<stdio.h>
int main(){
    float x1,x2,x3,x4,x5;//these are marks
    printf("Enter the marks in Maths:");
    scanf("%f",&x1);
    printf("Enter the marks in Physics:");
    scanf("%f",&x2);
    printf("Enter the marks in Chemistry:");
    scanf("%f",&x3);
    printf("Enter the marks in Computer Science:");
    scanf("%f",&x4);
    printf("Enter the marks in English:");
    scanf("%f",&x5);
    float percentage = (x1+x2+x3+x4+x5)/5;//percentage formula
    printf("Your percentage is: %f",percentage);
    return 0;
}