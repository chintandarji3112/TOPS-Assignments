// WAP to print Armstrong Number.

#include <stdio.h>
#include<math.h>

int main() {
    int num, org, rem, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    org = num;

    while (org != 0) {
        org /= 10;
        ++n;
    }

    org = num;

    while (org != 0) {
        rem = org % 10;
        result += pow(rem, n); 
        org /= 10;
    }
    

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

