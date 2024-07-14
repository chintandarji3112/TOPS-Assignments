//Calculate compound interest.
#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, interest;

    
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

   
    interest = principal * (pow((1 + rate / 100), time) - 1);

   
    printf("Compound interest = %.2f\n", interest);

    return 0;
}

