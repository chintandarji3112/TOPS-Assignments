//Convert Days In to Months.
#include <stdio.h>

int main() {
    int days;
    double months;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Convert days to months
    months = days / 30.42;

    // Display the equivalent months
    printf("Equivalent months: %.2f\n", months);

    return 0;
}

