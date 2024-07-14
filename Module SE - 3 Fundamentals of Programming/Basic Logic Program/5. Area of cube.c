// Find Area of Cube formula : a = 6a2
#include <stdio.h>

int main() 
{
    float length, area;

    // Input the length of the side of the cube
    printf("Enter the length of the side of the cube: ");
    scanf("%f", &length);

    // Calculate the surface area of the cube
    area = 6 * length * length;

    // Output the result
    printf("Surface area of the cube: %.2f\n", area);

    return 0;
}

