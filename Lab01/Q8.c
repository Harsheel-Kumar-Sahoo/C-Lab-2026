// EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES
#include <stdio.h>

int main() {
    int sec = 31558150;

    int mins = sec / 60;
    sec = sec % 60;

    int hours = mins / 60;
    mins = mins % 60;

    int days = hours / 24;
    hours = hours % 24;

    printf("%d days, %d hours, %d minutes, %d seconds\n", days, hours, mins, sec);
    
    return 0;
}
