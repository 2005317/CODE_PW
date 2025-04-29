#include<stdio.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x>=0){
        printf("Absolute value of this number is: %d\n", x);
    }
    else{
        x = -x;
        printf("Absolute value of this number is: %d\n", x);
    }
    return 0;
}