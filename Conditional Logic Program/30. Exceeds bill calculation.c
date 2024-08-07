//If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float unit_consumed, total_amount, surcharge = 0;

    // Read customer details and unit consumed
    printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter units consumed: ");
    scanf("%f", &unit_consumed);

    // Calculate total amount based on unit consumed
    if (unit_consumed <= 350)
        total_amount = unit_consumed * 1.20;
    else if (unit_consumed <= 600)
        total_amount = 350 * 1.20 + (unit_consumed - 350) * 1.50;
    else if (unit_consumed <= 800)
        total_amount = 350 * 1.20 + 250 * 1.50 + (unit_consumed - 600) * 1.80;
    else {
        total_amount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unit_consumed - 800) * 2.00;
        surcharge = total_amount * 0.18; // Calculate surcharge
    }

    // Add surcharge if applicable
    total_amount += surcharge;

    // Check for minimum bill
    if (total_amount < 256)
        total_amount = 256;

    // Print the electricity bill
    printf("\nCustomer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", unit_consumed);
    printf("Total Amount to be Paid: %.2f\n", total_amount);

    return 0;
}

