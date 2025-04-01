#include <stdio.h>

// Function to print Fibonacci series
void fibonacciSeries(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n"); // Move to the next line after printing the series
}
