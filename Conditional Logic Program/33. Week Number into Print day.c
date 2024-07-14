//WAP to input the week number and print week day.
#include <stdio.h>

int main() {
    int week_number;

    // Read week number
    printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    // Check week number and print corresponding day
    switch(week_number) {
        case 1:
            printf("Day of the week: Monday\n");
            break;
        case 2:
            printf("Day of the week: Tuesday\n");
            break;
        case 3:
            printf("Day of the week: Wednesday\n");
            break;
        case 4:
            printf("Day of the week: Thursday\n");
            break;
        case 5:
            printf("Day of the week: Friday\n");
            break;
        case 6:
            printf("Day of the week: Saturday\n");
            break;
        case 7:
            printf("Day of the week: Sunday\n");
            break;
        default:
            printf("Invalid week number!\n");
    }

    return 0;
}

