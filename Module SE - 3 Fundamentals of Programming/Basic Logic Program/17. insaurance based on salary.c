//Calculate person’s insurance premium based on salary
#include <stdio.h>

int main() {
    float salary, premium;

    // Input the salary
    printf("Enter your salary: ");
    scanf("%f", &salary);

    // Calculate the premium based on salary
    if (salary < 5000) {
        premium = salary * 0.02;  // Premium rate for salary less than 5000
    } else if (salary >= 5000 && salary < 10000) {
        premium = salary * 0.04;  // Premium rate for salary between 5000 and 10000
    } else {
        premium = salary * 0.06;  // Premium rate for salary greater than or equal to 10000
    }

    // Display the premium
    printf("Your insurance premium is: $%.2f\n", premium);

    return 0;
}

