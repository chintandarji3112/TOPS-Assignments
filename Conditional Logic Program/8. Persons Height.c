// Find Maximum number Using ternary Oprator.
#include <stdio.h>

int main() {
    float height;

  
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    
    if (height < 150) {
        printf("The person is short.\n");
    } else if (height >= 150 && height < 180) {
        printf("The person is of average height.\n");
    } else {
        printf("The person is tall.\n");
    }

    return 0;
}

