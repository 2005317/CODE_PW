#include <stdio.h>
int main(){
        int x,y,q;
        printf("Enter the divisor:");
        scanf("%d",&y);
        printf("Enter the dividend:");
        scanf("%d",&x);
        q = x/y;
        int r;
        r = x-(y*q);
        printf("Your remainder is: %d \n",r);
    return 0;
}