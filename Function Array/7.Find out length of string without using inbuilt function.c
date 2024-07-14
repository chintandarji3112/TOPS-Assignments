#include <stdio.h>

// Function to find length of string without using built-in function
int stringLength(char str[]) {
    int length = 0;
    // Iterate through each character until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];  // Assuming input string will not exceed 100 characters

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Reading string with spaces

    int length = stringLength(str);
    printf("Length of the string: %d\n", length);

    return 0;
}

