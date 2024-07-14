//Convert Monutes into Seconds and Hours.
#include <stdio.h>

int main() {
    int minutes;
    int hours, seconds;

    // Input number of minutes
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes to hours and seconds
    hours = minutes / 60;
    seconds = minutes * 60;

    // Display the equivalent hours and seconds
    printf("Equivalent hours: %d\n", hours);
    printf("Equivalent seconds: %d\n", seconds);

    return 0;
}

