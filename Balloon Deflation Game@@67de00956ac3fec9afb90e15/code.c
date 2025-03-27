#include <stdio.h>

void deflateBalloons(int air[], int n) {
    // Loop until all balloons are deflated
    while (1) {
        int minAir = 1001; // Assume air levels cannot exceed 1000
        int allDeflated = 1; // Flag to check if all are deflated
        
        // Find the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) { // Check if the balloon is not deflated
                allDeflated = 0; // There is at least one balloon still inflated
                if (air[i] < minAir) {
                    minAir = air[i]; // Update minimum air
                }
            }
        }
        
        // Exit if all balloons are deflated
        if (allDeflated) {
            break;
        }
        
        // Deflate the balloons by the minimum amount found
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir; // Deflate the balloon
                if (air[i] < 0) {
                    air[i] = 0; // Ensure it does not go below zero
                }
            }
        }
        
        // Here you can add code to print the current state of balloons if required
        printf("Air levels after deflation: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", air[i]);
        }
        printf("\n");
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