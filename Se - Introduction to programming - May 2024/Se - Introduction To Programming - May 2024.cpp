#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct VowelConsonantCount {
    int vowelCount;
    int consonantCount;
};

struct CountResult {
    int spaceCount;
    int digitCount;
};

void reverseString(char str[]);
void concatenateStrings(char str1[], char str2[]);
int isPalindrome(char str[]);
void copyString(char dest[], char src[]);
int getStringLength(char str[]);
int getCharFrequency(char str[], char ch);
struct VowelConsonantCount countVowelsAndConsonants(char str[]);
struct CountResult countSpacesAndDigits(char str[]);
void removeNewline(char str[]);

int main() {
    char inputStr1[100], inputStr2[100], character;
    int userChoice, continueFlag;
    do {
        printf("\nString Operations Menu:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if a string is a palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of a string\n");
        printf("6. Find the frequency of a character in a string\n");
        printf("7. Find the number of vowels and consonants in a string\n");
        printf("8. Find the number of blank spaces and digits in a string\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &userChoice);
        getchar(); 
        switch (userChoice) {
            case 1:
                printf("Enter a string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                reverseString(inputStr1);
                printf("Reversed string: %s\n", inputStr1);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                printf("Enter second string: ");
                fgets(inputStr2, sizeof(inputStr2), stdin);
                removeNewline(inputStr2);
                concatenateStrings(inputStr1, inputStr2);
                printf("Concatenated string: %s\n", inputStr1);
                break;
            case 3:
                printf("Enter a string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                if (isPalindrome(inputStr1)) {
                    printf("The string is a palindrome.\n");
                } else {
                    printf("The string is not a palindrome.\n");
                }
                break;
            case 4:
                printf("Enter the source string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                copyString(inputStr2, inputStr1);
                printf("Copied string: %s\n", inputStr2);
                break;
            case 5:
                printf("Enter a string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                printf("Length of the string: %d\n", getStringLength(inputStr1));
                break;
            case 6:
                printf("Enter a string: ");
                fgets(inputStr1, sizeof(inputStr1), stdin);
                removeNewline(inputStr1);
                printf("Enter the character to find frequency: ");
                scanf("%c", &character);
                printf("Frequency of '%c': %d\n", character, getCharFrequency(inputStr1, character));
                break;
            case 7:
                {
                    struct VowelConsonantCount vcResult;
                    printf("Enter a string: ");
                    fgets(inputStr1, sizeof(inputStr1), stdin);
                    removeNewline(inputStr1);
                    vcResult = countVowelsAndConsonants(inputStr1);
                    printf("Number of vowels: %d\n", vcResult.vowelCount);
                    printf("Number of consonants: %d\n", vcResult.consonantCount);
                }
                break;
            case 8:
                {
                    struct CountResult result;
                    printf("Enter a string: ");
                    fgets(inputStr1, sizeof(inputStr1), stdin);
                    removeNewline(inputStr1);
                    result = countSpacesAndDigits(inputStr1);
                    printf("Number of blank spaces: %d\n", result.spaceCount);
                    printf("Number of digits: %d\n", result.digitCount);
                }
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 8.\n");
        }

        printf("Do you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &continueFlag);
        getchar();

    } while (continueFlag == 1);

    printf("Thank you for using the application!\n");
    return 0;
}


void removeNewline(char str[]) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}


void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
}


int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}


void copyString(char dest[], char src[]) {
    strcpy(dest, src);
}


int getStringLength(char str[]) {
    return strlen(str);
}


int getCharFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}


struct VowelConsonantCount countVowelsAndConsonants(char str[]) {
    struct VowelConsonantCount result;
    result.vowelCount = 0;
    result.consonantCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char lower = tolower(str[i]);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                result.vowelCount++;
            } else {
                result.consonantCount++;
            }
        }
    }
    return result;
}


struct CountResult countSpacesAndDigits(char str[]) {
    struct CountResult result;
    result.spaceCount = 0;
    result.digitCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            result.spaceCount++;
        } else if (isdigit(str[i])) {
            result.digitCount++;
        }
    }
    return result;
}

