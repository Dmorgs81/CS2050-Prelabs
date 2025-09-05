#include <stdio.h>

// Function to get array info: distinct count, min, and max
void getArrayInfo(int *array, int n, int *distinctCount, int *minVal, int *maxVal) {
    if (n <= 0) {
        *distinctCount = 0;
        *minVal = 0;
        *maxVal = 0;
        return;
    }

    // Initialize min and max
    *minVal = array[0];
    *maxVal = array[0];

    // Temporary array to track unique values (simple method)
    int unique[n];
    int uniqueSize = 0;

    for (int i = 0; i < n; i++) {
        // Update min and max
        if (array[i] < *minVal) *minVal = array[i];
        if (array[i] > *maxVal) *maxVal = array[i];

        // Check if this number is already in unique[]
        int isDuplicate = 0;
        for (int j = 0; j < uniqueSize; j++) {
            if (array[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        // If not duplicate, add it to unique[]
        if (!isDuplicate) {
            unique[uniqueSize++] = array[i];
        }
    }

    *distinctCount = uniqueSize;
}

// Example usage
int main() {
    int arr[] = {5, 2, 7, 2, 9, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int distinctCount, minVal, maxVal;
    getArrayInfo(arr, n, &distinctCount, &minVal, &maxVal);

    printf("Distinct Count: %d\n", distinctCount);
    printf("Min Value: %d\n", minVal);
    printf("Max Value: %d\n", maxVal);

    return 0;
}
