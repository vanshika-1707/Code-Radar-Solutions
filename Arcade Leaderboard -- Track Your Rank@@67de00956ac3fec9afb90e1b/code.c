#include <stdio.h>
#include <stdlib.h>

// Function to calculate ranks
void calculateRanks(int *leaderboard, int n, int *scores, int m) {
    int *ranks = (int *)malloc(n * sizeof(int));
    int rank = 1;

    // Calculate ranks based on the dense ranking system
    for (int i = 0; i < n; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            ranks[i] = rank++;
        } else {
            ranks[i] = ranks[i - 1];
        }
    }

    // For each score, determine the rank
    int j = n - 1;
    for (int i = 0; i < m; i++) {
        while (j >= 0 && scores[i] >= leaderboard[j]) {
            j--;
        }
        printf("%d\n", j + 2); // j + 2 since we want the rank after the current score
    }

    free(ranks);
}

int main() {
    int n, m;

    // Input leaderboard size
    scanf("%d", &n);
    int *leaderboard = (int *)malloc(n * sizeof(int));

    // Input leaderboard scores in descending order
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    // Input number of games played
    scanf("%d", &m);
    int *scores = (int *)malloc(m * sizeof(int));

    // Input game scores in ascending order
    for (int i = 0; i < m; i++) {
        scanf("%d", &scores[i]);
    }

    // Calculate and print ranks
    calculateRanks(leaderboard, n, scores, m);

    // Clean up
    free(leaderboard);
    free(scores);

    return 0;
}