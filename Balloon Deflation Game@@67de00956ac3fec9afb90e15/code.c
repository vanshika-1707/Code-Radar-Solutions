#include <stdio.h>
#include <limits.h>

void deflateBalloons(int air[], int n) {
    while (n > 0) {
        // Print the number of balloons remaining with air
        printf("%d\n", n);
        
        // Find the balloon with the minimum air
        int minAir = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0 && air[i] < minAir) {
                minAir = air[i];
            }
        }
        
        // Deflate this amount from all balloons
        for (int i = 0; i < n; i++) {
            // If the balloon has air, reduce it
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
        
        // Remove any balloons that are flat
        int newSize = 0;
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[newSize++] = air[i];
            }
        }
        n = newSize; // Update the number of balloons
    }
}

int main() {
    int n;

    // Read number of balloons
    scanf("%d", &n);
    
    int air[1000];

    // Read air level in each balloon
    for (int i = 0; i < n; i++) {
        scanf("%d", &air[i]);
    }

    // Call the deflateBalloons function
    deflateBalloons(air, n);

    return 0;
}