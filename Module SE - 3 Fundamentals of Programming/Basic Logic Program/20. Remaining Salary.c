// Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include <stdio.h>

int main() {
    float salary, salary, premium, installment;
    
    
    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    premium = 0.1 * salary;
    
    
    salary = salary - premium;
    
    installment = 0.1 * salary
    printf("Your salary after deducting 10%% insurance premium: $%.2f\n", salary);
    printf("Your monthly loan installment: $%.2f\n", installment);
    
    return 0;
}

