// WAP to find reverse of string using recursion.
#include <stdio.h>

// Function to print reverse of the passed string
void reverse(char *str) {
    if (*str) {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char a[] = "natnihC";
    reverse(a);
    return 0;
}


