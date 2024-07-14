//Display The Information : 
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address									
#include <stdio.h>

int main() {
    // Declare variables to store user information
    char name[100];
    char birth_date[100];
    int age;
    char address[100];

    // Prompt the user to enter their information
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your birth date: ");
    scanf("%s", birth_date);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the input buffer
    while (getchar() != '\n');

    printf("Enter your address: ");
    fgets(address, sizeof(address), stdin);

    // Display the user's information
    printf("Your Name: %s\n", name);
    printf("Your Birth Date: %s\n", birth_date);
    printf("Your Age: %d\n", age);
    printf("Your Address: %s\n", address);

    return 0;
}

