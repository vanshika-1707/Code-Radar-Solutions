#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a; // Descending order
}

// Function to remove duplicates from the array and return the count
int remove_duplicates(int *arr, int size) {
    int uniqueCount = 0;
    for (int i = 0; i < size; i++) {
        // Check if arr[i] is not already in arr[0..uniqueCount-1]
        int j;
        for (j = 0; j < uniqueCount; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }
        if (j == uniqueCount) {
            arr[uniqueCount++] = arr[i]; // Only add unique elements
        }
    }
    return uniqueCount;
}

int main() {
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int)); // Dynamically allocate memory

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicates
    int uniqueCount = remove_duplicates(arr, n);

    // Sort the unique elements in descending order
    qsort(arr, uniqueCount, sizeof(int), compare);

    // Print the results
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d\n", arr[i]);
    }

    // Free allocated memory
    free(arr);
    return 0;
}