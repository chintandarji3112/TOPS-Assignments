//Write a C program to accept two integers and check whether they are equal or not.
#include <stdio.h>

int main() {
    int num1, num2;

    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    if (num1 == num2) {
        printf("The numbers %d and %d are equal.\n", num1, num2);
    } else {
        printf("The numbers %d and %d are not equal.\n", num1, num2);
    }

    return 0;
}

