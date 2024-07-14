//WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case
#include <stdio.h>

int main() {
    int day;

    // Read day number
    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    // Display day of the week
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number!\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    char ch;

    // Read a character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert lowercase to uppercase
    if (ch >= 'a' && ch <= 'z')
        ch -= 32;

    // Check if the character is a vowel or consonant
    switch(ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }

    return 0;
}

