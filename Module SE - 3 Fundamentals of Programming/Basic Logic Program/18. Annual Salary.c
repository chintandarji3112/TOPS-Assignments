//Calculate person’s Annual salary.
#include <stdio.h>

int main() {
    float monthlySalary, annualSalary;

    // Input the monthly salary
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    // Calculate the annual salary
    annualSalary = monthlySalary * 12;

    // Display the annual salary
    printf("Your annual salary is: $%.2f\n", annualSalary);

    return 0;
}

