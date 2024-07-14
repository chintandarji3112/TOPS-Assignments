// Find area of Rectangle Formula : A=wl
#include <stdio.h>

int main() {
    float width, length, calculate;

    // Input width and length of the rectangle
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    // Calculate the area of the rectangle
    calculate = 2 * (length + width);

    // Output the result
    printf("Area of the rectangle: %.2f\n", calculate);

    return 0;
}

