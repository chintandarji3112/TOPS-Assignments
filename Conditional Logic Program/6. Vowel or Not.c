//Find Character is Vowel or Not.
#include <stdio.h>

int main() {
    char ch;

    // Input the character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if the character is a vowel
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is not a vowel.\n", ch);
    }

    return 0;
}

