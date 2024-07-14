//Swap To Numbers Using MUl and Div.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swap using multiplication and division
    a = a * b; // Store product of a and b in a
    b = a / b; // Store new value of a in b
    a = a / b; // Store original value of b in a

    // Output swapped values
    printf("After swapping, value of a = %d\n", a);
    printf("After swapping, value of b = %d\n", b);

    return 0;
}

