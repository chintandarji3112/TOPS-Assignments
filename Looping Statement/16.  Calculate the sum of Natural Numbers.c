//Calculate the Sum of Natural Numbers Using the While Loop.

#include <stdio.h>

int main() {
    int n, sum, i ;

    printf("Enter Number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}

