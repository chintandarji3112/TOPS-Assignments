//Convert Kilometers in to Meters.
#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input distance in kilometers
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Convert kilometers to meters
    meters = kilometers * 1000;

    // Display the equivalent distance in meters
    printf("Equivalent distance in meters: %.2f\n", meters);

    return 0;
}

