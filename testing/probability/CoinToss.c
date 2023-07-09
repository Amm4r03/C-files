#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate a coin toss
int tossCoin() {
    return rand() % 2;  // Returns 0 for tails and 1 for heads
}

int main() {
    FILE *file = fopen("coin_toss_results.csv", "w");
    if (file == NULL) {
        printf("Error opening the file.");
        return 1;
    }

    srand(time(NULL));  // Initialize random number generator

    int i, j;
    int numTosses = 10;
    int numSets = 50000;

    // Write CSV header
    fprintf(file, "Set,Results\n");

    // Perform coin tosses and write results to CSV
    for (i = 0; i < numSets; i++) {
        fprintf(file, "%d,", i+1);

        // Perform 10 coin tosses
        for (j = 0; j < numTosses; j++) {
            int result = tossCoin();
            if (result == 1) {
                fprintf(file, "H,");
            } else {
                fprintf(file, "T,");
            }
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Coin toss results have been written to coin_toss_results.csv\n");

    return 0;
}
