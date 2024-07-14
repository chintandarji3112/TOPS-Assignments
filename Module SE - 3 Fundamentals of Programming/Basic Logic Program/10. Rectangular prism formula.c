// find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include <stdio.h>

int main() {
    float w, l, h, area;

    // Input width, length, and height of the rectangular prism
    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &w);

    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &l);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &h);

    // Calculate the surface area of the rectangular prism
    area = 2 * (w * l + h * l + h * w);

    // Output the result
    printf("Surface area of the rectangular prism: %.2f\n", area);

    return 0;
}

