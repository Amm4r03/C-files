#include <stdio.h>
#include <unistd.h> // For usleep function

void printPattern(int numRows, int numCols, int shift) {
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col < numCols; col++) {
            if (col == (row + shift) % numCols) {
                printf("* ");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }
}

int main() {
    int numRows = 5;    // Number of rows
    int numCols = 100;    // Number of columns
    int animationDelay = 100000; // Delay in microseconds (0.4 seconds)

    while (1) {
        // Clear the console (for Unix-like systems)
        printf("\033[H\033[J");

        // Update and print the animated pattern
        for (int shift = 0; shift < numCols; shift++) {
            printPattern(numRows, numCols, shift);
            usleep(animationDelay);
            // Clear the console again
            printf("\033[H\033[J");
        }
    }

    return 0;
}
