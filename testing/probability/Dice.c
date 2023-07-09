#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ROLLS 10000     // Number of rolls
#define NUM_DICE 5         // Number of dice

int main() {
    FILE *file;
    file = fopen("dice_rolls.csv", "w");  // Open the file in write mode

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    srand(time(NULL));  // Seed the random number generator

    // Write the CSV header
    fprintf(file, "Roll Number, Die 1, Die 2, Die 3, Die 4, Die 5\n");

    for (int i = 1; i <= NUM_ROLLS; i++) {
        // Roll 5 dice and store the results in an array
        int diceValues[NUM_DICE];
        for (int j = 0; j < NUM_DICE; j++) {
            diceValues[j] = rand() % 6 + 1;  // Generate a random dice value from 1 to 6
        }

        // Write the roll number and dice values to the file
        fprintf(file, "%d, ", i);
        for (int j = 0; j < NUM_DICE; j++) {
            fprintf(file, "%d", diceValues[j]);
            if (j != NUM_DICE - 1) {
                fprintf(file, ", ");
            }
        }
        fprintf(file, "\n");
    }

    fclose(file);  // Close the file
    printf("Dice rolls recorded successfully.\n");

    return 0;
}
