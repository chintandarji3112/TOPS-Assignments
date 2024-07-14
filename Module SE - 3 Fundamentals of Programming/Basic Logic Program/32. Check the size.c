//Check the Size.
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Check the size of the sum
    if (sum >= -32768 && sum <= 32767) {
        printf("The sum is within the range of short int.\n");
    } else {
        printf("The sum is not within the range of short int.\n");
    }

    return 0;
}

