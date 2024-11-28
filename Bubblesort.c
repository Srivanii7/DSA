#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    

    return 0;
}




//  **Bubble Sort**
// - **Time Complexity**:
//   - **Best Case**: \( O(n) \) (when the array is already sorted)
//   - **Average Case**: \( O(n^2) \)
//   - **Worst Case**: \( O(n^2) \)
// - **Explanation**: Bubble sort repeatedly swaps adjacent elements if they are in the wrong order. This process is repeated until no swaps are needed. The worst case happens when the array is sorted in reverse order, requiring \( O(n^2) \) operations.


