#include <stdio.h>

int main() {
    int y;
    printf("Enter Any Year: ");
    scanf("%d", &y);

    if (y > 0) {
        if ((y % 4 == 0 )) {
            printf("It is a Leap Year\n");
        } else {
            printf("It is not a Leap Year\n");
        }
    } else {
        printf("Please enter a valid positive year.\n");
    }

    return 0;
}
