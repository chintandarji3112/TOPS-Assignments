//Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include <stdio.h>

int main() {
    float unit_charges, total_bill;
    float surcharge = 0.20; // 20% surcharge

    // Read electricity unit charges
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unit_charges);

    // Calculate total bill based on unit charges
    if (unit_charges <= 50)
        total_bill = unit_charges * 0.50;
    else if (unit_charges <= 150)
        total_bill = 50 * 0.50 + (unit_charges - 50) * 0.75;
    else if (unit_charges <= 250)
        total_bill = 50 * 0.50 + 100 * 0.75 + (unit_charges - 150) * 1.20;
    else
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit_charges - 250) * 1.50;

    // Add surcharge
    total_bill += surcharge * total_bill;

    // Print total electricity bill
    printf("Total electricity bill: %.2f\n", total_bill);

    return 0;
}

