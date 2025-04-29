#include<stdio.h>
int main(){
    int n,a,i,d;
        printf("Enter First Term: ");
            scanf("%d",&a);
        printf("Enter Common Difference(d): ");
            scanf("%d",&d);
        printf("Enter Number Of Terms: ");
            scanf("%d",&n);
        for(i=1;i<=n;i++){
            int t = a+((i-1)*d);
                printf("%d\n",t);
        }

    return 0;
}