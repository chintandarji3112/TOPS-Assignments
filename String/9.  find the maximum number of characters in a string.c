#include <stdio.h>

// Function to find the maximum number of characters in a string
int maxStringLength(char str[]) {
    int length = 0;

    // Iterate through the string until null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100]; // Assuming maximum string length is 99 characters

    printf("Enter a string: ");
    scanf(" %[^\n]", str); // Read string with spaces

    int maxLength = maxStringLength(str);

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}

