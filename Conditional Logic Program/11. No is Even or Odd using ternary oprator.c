// find number is even or odd using ternary operator.
#include <stdio.h>

int main() {
    int num;

    // Accepting a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);


    
    // Equivalent code using if-else statements
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    

    return 0;
}


