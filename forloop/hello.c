#include<stdio.h>
int main(){
    int i,n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+3){
        printf("Hello\n");
    }
    return 0;
}