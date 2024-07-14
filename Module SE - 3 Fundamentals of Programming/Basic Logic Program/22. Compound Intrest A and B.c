//Calculate compound interest.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compound_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time the money is invested for (in years): ");
    scanf("%f", &time);

   
    amount = principal * pow(1 + (rate / 100), time);

   
    compound_interest = amount - principal;

   
    printf("The amount after %0.2f years is: $%0.2f\n", time, amount);
    printf("The compound interest accrued is: $%0.2f\n", compound_interest);

    return 0;
}

