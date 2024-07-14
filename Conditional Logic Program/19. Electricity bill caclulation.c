//Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 29. @2.00

#include <stdio.h>

int main() {
    int customer_id;
    char customer_name[50];
    float unit_consumed, total_amount;

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
    else
        total_amount = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unit_consumed - 800) * 2.00;

    // Print the electricity bill
    printf("\nCustomer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", unit_consumed);
    printf("Total Amount to be Paid: %.2f\n", total_amount);

    return 0;
}

