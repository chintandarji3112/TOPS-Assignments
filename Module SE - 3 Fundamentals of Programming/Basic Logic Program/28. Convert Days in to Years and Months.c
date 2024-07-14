//Convert Days in to Years and Months.
#include <stdio.h>

int main() {
    int years;
    int days, months;

    // Input number of years
    printf("Enter number of years: ");
    scanf("%d", &years);

    // Convert years to days
    days = years * 365;

    // Convert days to months
    months = days / 30.42;

    // Display the equivalent days and months
    printf("Equivalent days: %d\n", days);
    printf("Equivalent months: %d\n", months);

    return 0;
}

