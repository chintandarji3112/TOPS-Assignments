#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2, i, j, temp;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    // Input elements in first array
    printf("Enter elements in first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    // Input elements in second array
    printf("Enter elements in second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Sort both arrays in ascending order
    for (i = 0; i < size1; i++) {
        for (j = i + 1; j < size1; j++) {
            if (arr1[i] > arr1[j]) {
                temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    for (i = 0; i < size2; i++) {
        for (j = i + 1; j < size2; j++) {
            if (arr2[i] > arr2[j]) {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    // Print the sorted arrays
    printf("\nFirst array in ascending order: ");
    for (i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nSecond array in ascending order: ");
    for (i = 0; i < size2; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

