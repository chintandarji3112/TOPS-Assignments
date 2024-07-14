// Check Number is Positive or Not.

#include <stdio.h>

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number > 0)
        printf("%.2lf is positive.\n", number);
    else if (number < 0)
        printf("%.2lf is negative.\n", number);
    else
        printf("You entered zero.\n");

    return 0;
}

