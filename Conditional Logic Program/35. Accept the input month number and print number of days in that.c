//Accept the input month number and print number of days in that month.

#include <stdio.h>

int main() {
    int month_number;

    // Read month number
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    // Check month number and print corresponding number of days
    switch(month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Number of days: 31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("Number of days: 30\n");
            break;
        case 2:
            printf("Number of days: 28 or 29\n"); // February has 28 days normally, 29 in leap years
            break;
        default:
            printf("Invalid month number!\n");
    }

    return 0;
}

