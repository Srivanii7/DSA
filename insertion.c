#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, temp, j;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1] that are greater than temp to one
           position ahead of their current position */
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
