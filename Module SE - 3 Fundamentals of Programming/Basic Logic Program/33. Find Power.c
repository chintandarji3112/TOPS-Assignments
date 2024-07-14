//Find Power.
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate and print first three powers
    printf("First three powers of %d:\n", num);
    printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);

    return 0;
}

