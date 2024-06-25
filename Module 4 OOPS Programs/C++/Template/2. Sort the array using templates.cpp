#include <iostream>
#include <string>
#include <algorithm> // For std::sort

using namespace std;

// Template function to print the array
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int intArr[] = {72, 54, 35, 22, 12, 20, 97};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Unsorted integer array: ";
    printArray(intArr, n1);

    sort(intArr, intArr + n1);

    cout << "Sorted integer array: ";
    printArray(intArr, n1);

    // Float array
    float floatArr[] = {64.5, 34.2, 25.1, 12.7, 22.3, 11.8, 90.6};
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);

    cout << "Unsorted float array: ";
    printArray(floatArr, n2);

    sort(floatArr, floatArr + n2);

    cout << "Sorted float array: ";
    printArray(floatArr, n2);

    // String array
    string strArr[] = {"Banana", "Kiwi", "Cherry", "Pine Apple"};
    int n3 = sizeof(strArr) / sizeof(strArr[0]);

    cout << "Unsorted string array: ";
    printArray(strArr, n3);

    sort(strArr, strArr + n3);

    cout << "Sorted string array: ";
    printArray(strArr, n3);

    return 0;
}


