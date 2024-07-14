#include <stdio.h>

int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], product[100][100];
    int i, j;

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of the 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of the 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Multiplying two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            product[i][j] = 0;
            for (int k = 0; k < c; ++k)
                product[i][j] += a[i][k] * b[k][j];
        }

    // Printing the results
    printf("\nSum of two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j)
            printf("%d   ", sum[i][j]);
        printf("\n");
    }

    printf("\nProduct of two matrices:\n");
    for (i = 0; i < r; ++i) {
        for (j = 0; j < c; ++j)
            printf("%d   ", product[i][j]);
        printf("\n");
    }

    return 0;
}

