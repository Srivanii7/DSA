#include <stdio.h>

void countingSort(int arr[], int size) {
    int output[size]; // Output array
    int count[100] = {0}; // Assuming the range of elements is 0 to 99

    // Step 1: Count occurrences of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Step 2: Modify count array to store cumulative counts
    for (int i = 1; i < 100; i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Build the output array
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Step 4: Copy the output array to arr, so that arr now contains sorted elements
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

// Utility function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 7, 11, 5, 2, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    countingSort(arr, size);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
