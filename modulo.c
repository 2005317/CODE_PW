#include <stdio.h>
int main(){
        int x,y,q;
        printf("Enter the divisor:");
        scanf("%d",&y);
        printf("Enter the dividend:");
        scanf("%d",&x);
        int r;
        r = x % y;
        printf("Your remainder is: %d \n",r);
    return 0;
}