//C Program to Reverse a Number Using FOR Loop.

#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reversing the number
    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}

