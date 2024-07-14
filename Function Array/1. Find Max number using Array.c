//Write a program to find out the max number from given array using function.
#include <stdio.h>

int main() {
	int i;
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0]; // Assume first element as maximum

    // Iterate through the array
    for ( i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

