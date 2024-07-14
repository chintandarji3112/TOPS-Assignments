//Write a C program to check whether a triangle can be formed with the given values for the angles.
#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Read the angles of the triangle
    printf("Enter the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check if the angles form a valid triangle
    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
        printf("The angles form a valid triangle.\n");
    else
        printf("The angles do not form a valid triangle.\n");

    return 0;
}

