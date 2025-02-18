#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Flag to check if number is prime

    printf("Enter a number greater than 0: ");
    scanf("%d", &num);

    // Handle edge cases for numbers less than 2
    if (num < 2) {
        isPrime = 0; // Not prime
    } else {
        for (i = 2; i * i <= num; i++) { // Check up to sqrt(num)
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break; // Exit loop if not prime
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}