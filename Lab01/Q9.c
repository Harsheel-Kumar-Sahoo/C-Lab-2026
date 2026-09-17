// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
#include <stdio.h>

int main() {
    int hours, mins, sec;

    printf("Enter the hours :");
    scanf("%d", &hours);
    printf("\n");

    printf("Enter the minutes :");
    scanf("%d", &mins);
    printf("\n");

    printf("Enter the seconds :");
    scanf("%d", &sec);
    printf("\n");

    sec = sec + (mins * 60) + (hours * 60 * 60);
    printf("Total seconds : %d", sec);
    return 0;
}
