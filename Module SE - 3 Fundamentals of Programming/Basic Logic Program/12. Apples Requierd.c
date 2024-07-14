//Accept number of students from user. I need to give 5 apples to each student. How many apples are required?
#include <stdio.h>

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Calculate the total number of apples required
    int totalApples = numStudents * 5;

    printf("Total apples required: %d\n", totalApples);

    return 0;
}

