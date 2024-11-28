#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate the middle index

        if (arr[mid] == target) {
            return mid;  // Return the index if the target is found
        }
        if (arr[mid] < target) {
            low = mid + 1;  // Ignore the left half
        } else {
            high = mid - 1;  // Ignore the right half
        }
    }

    return -1;  // Return -1 if the target is not found
}

int main() {
    
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
