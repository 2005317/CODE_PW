#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        int x =  n*i;
        printf("%d*%d= %d\n",n,i,x);
    }
    return 0;
}