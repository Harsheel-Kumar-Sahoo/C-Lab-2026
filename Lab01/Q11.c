// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include <stdio.h>

int main(){
    int totalSec;
    printf("Enter the total seconds : \n");
    scanf("%d", &totalSec);

    int mins = totalSec / 60;
    int sec = totalSec % 60;

    int hours = mins / 60;
    mins = mins % 60;

    printf("Time : %d hours : %d minutes : %d seconds\n", hours, mins, sec);
    
    
    return 0;
}
