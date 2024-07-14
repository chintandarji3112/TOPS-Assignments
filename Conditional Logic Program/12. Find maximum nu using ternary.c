// find maximum number among 3 numbers using ternary operator.
#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Accepting three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

   
    // Equivalent code using if-else statements
    if (num1 > num2) {
        if (num1 > num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        if (num2 > num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}

