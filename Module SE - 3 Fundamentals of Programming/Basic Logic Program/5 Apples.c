// Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include <stdio.h>

int main() {
    int students, apples;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &students);

    // Calculate total apples required
    apples = students * 5;

    // Output the result
    printf("Total apples required: %d\n", apples);

    return 0;
}

